#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define db long double
#define st first
#define nd second
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define nl "\n"
#define ii pair<int,int>
#define vi vector<int>
#define yes "Yes"
#define no "No"

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

ll t, p, n, k;
ll fac[N + 1];
ll inv[N + 1];

ll modulo(ll x, ll n, ll m) {
    x %= m;
    ll res = 1;
    while(n > 0) {
        if (n % 2 == 1)
            res = res * x % m;
        x = x * x % m;
        n /= 2;
    }
    return res;
}

void factorial() {
    fac[0] = 1;
    for (int i = 1; i <= N; ++i)
        fac[i] = fac[i-1] * i % p;
}

void inverse() {
    inv[0] = 1;
    inv[1] = 1;
    inv[N] = modulo(fac[N], p-2, p);
    for (int i = N; i >= 1; --i)
        inv[i-1] = inv[i] * i % p;
}

ll binomial(ll n, ll r, ll p) {
    return fac[n] * inv[r] % p * inv[n - r] % p;
}

int main() {
    fast;
    indef();
    clock_t z = clock();

    factorial();
    inverse();
    cin >> t >> p;
    while(t--) {
        cin >> n >> k;
        cout << binomial(n, k, p) << nl;
    }

    debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
