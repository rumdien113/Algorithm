
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define db long double
#define st first
#define nd second
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define nl '\n'
#define ii pair<ll,ll>
#define vi vector<ll>

const int M = 1e9+7;
const int P = 1e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

ll N, W, H;
vector<ii> a;
vector<bool> ok;

void trace(ll n, ll w, vector<vi> &dp, vector<ii> &a) {
    vector<int> pick;
    ok.resize(n + 1);
    while(n > 0) {
        if (dp[n][w] == dp[n-1][w])
            --n;
        else {
            pick.pb(n);
            w -= a[n].st;
            // cout << "n: " << n << " | w: " << w << " | a[n].nd: " << a[n].nd << nl; 
            --n;
        }
    }
    for (int i = pick.size() - 1; i >= 0; --i) {
        // cout << pick[i] << ' ';
        ok[pick[i]] = true;
    }
}

ll get_hand(ll n, ll h, vector<ii> &a, vector<bool> &ok) {
    ll hand_value = 0;
    for(int i = 1; i <= n; ++i) {
        if (!ok[i])
            if (a[i].st <= h && a[i].nd > hand_value)
                hand_value = a[i].nd;
    }
    // cout << nl << "hand_value: " << hand_value << nl;
    // cout << nl << "size ok: " << ok.size() << nl;
    // for(auto i : ok)
    //     cout << i << ' ';
    return hand_value;
}


// int get_hand(int n, int h, vector<ii> &a, vector<bool> &ok) {
//     int hand_value = 0;
//     int index;
//     for(int i = 1; i <= n; ++i) {
//         if (a[i].st <= h && a[i].nd > hand_value) {
//             hand_value = a[i].nd;
//             index = i;
//         }
//     }
//     cout << "hand_value: " << hand_value << " | index: " << index << nl;
//     a.erase(a.begin() + index);
//     // cout << nl << "hand_value: " << hand_value << nl;
//     // cout << nl << "size ok: " << ok.size() << nl;
//     // for(auto i : ok)
//     //     cout << i << ' ';
//     return hand_value;
// }

void sol(ll n, ll w, ll h, vector<ii> &a) {
    // int hand = get_hand(n, h, a, ok);
    vector<vi> dp(n+1, vi(w+1, 0));
    for(int i = 1; i <= n; ++i) {
        for(int j = 0; j <= w; ++j) {
            dp[i][j] = dp[i-1][j];
            if (j >= a[i].st)
                dp[i][j] = max(dp[i][j], dp[i-1][j - a[i].st] + a[i].nd);
        }
    }
    // cout << dp[n][w] << nl;
    trace(n, w, dp, a);
    cout << dp[n][w] + get_hand(n, h, a, ok);
    // cout << dp[n][w] + hand;
}


int main() {
	fast;
  	indef();
    cin >> N >> W >> H;
    a.resize(N + 1);
    for(int i = 1; i <= N; ++i)
        cin >> a[i].st >> a[i].nd;
    // for(auto i : a) 
    //     cout << i.st << ' ' << i.nd << nl;
    sol(N, W, H, a);
  	return 0;
}
