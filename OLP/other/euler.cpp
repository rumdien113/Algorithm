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
const int N = 5e6+5;
const ll MOD = 998244353;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}

ll a, b;
ll phi[N + 1];

void sieve() {
    for (int i = 0; i < N; i++)
        phi[i] = i;

    for (int i = 2; i < N; i++) {
        if (phi[i] == i) {
            for (int j = i; j < N; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}

ll euler(ll n, ll num) {
    ll gcd = __gcd(n, num);
    ll ans = phi[n] * phi[num] / phi[gcd];
    ans = ((ans % MOD) * (gcd % MOD)) % MOD;
    return ans;
}

int main() {
    fast;
    indef();
    sieve();
    cin >> a >> b;
    ll ans = 0;
    for (ll i = 1; i <= b; i++) {
        ans = (ans + euler(a, i)) % MOD;
    }
    cout << ans;
    return 0;
}
