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

int binomial(int n, int k, int p) {
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
    for (int i = 0; i <= n; ++i) {
        dp[i][0] = 1;
        if (i <= k)
            dp[i][i] = 1;
    }

    for (int i = 0; i <= n; ++i) 
        for (int j = 1; j <= min(i, k); ++j) 
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % p;

    return dp[n][k];
}

int main() {
    fast;
    indef();
    clock_t z = clock();

    cin >> t >> p;
    while(t--) {
        cin >> n >> k;
        cout << binomial(n, k, p) << nl;
    }

    debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
