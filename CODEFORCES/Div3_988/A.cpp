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
#define ii pair<int,int>
#define vi vector<int>

const int M = 1e9+7;
const int N = 1e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif
}

int t, n;

void sol() {
    int ans = 0;
    cin >> n;
    vi mp(n+2, 0);
    int a[n];
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        if (mp[a[i]] == 0)
            mp[a[i]] = 1;
        else
            mp[a[i]]++;
    }
    // cout << "====================" << nl;
    // for (int i = 1; i <= n; ++i)
    //     cout << a[i] << ' ';
    // cout << nl;
    for (int i = 1; i <= n; ++i) {
        ans += mp[i] / 2;
        // cout << i << " debug: " << mp[i]/2 << nl;
    }
    cout << ans << nl;
}

int main() {
  fast;
    indef();
    
    cin >> t;
    while (t--)
        sol();

    return 0;
}

