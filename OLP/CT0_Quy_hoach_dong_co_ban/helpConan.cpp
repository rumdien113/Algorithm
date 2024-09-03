#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <utility>
#include <cstring>
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
#define nln '\n'
#define ll long long
#define X first
#define Y second
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;

const int N = 1e5+5;

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int t, n, ma = 0,dp[N], ans[N];

int main() {
	fast;
  	indef();
  	cin >> t;
  	
  	memset(dp, 0, sizeof(dp));
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 1; i < N/2-2; i++) {
		dp[2*i] = dp[i];
		dp[2*i+1] = dp[i] + dp[i+1];
	}
	for (int i = 0; i < N; i++) {
		if (dp[i] >= ma)
			ma = dp[i];
		ans[i] = ma;
	}
	while(t--) {
		cin >> n;
		cout << ans[n] << nln;
	}
	return 0;
}
