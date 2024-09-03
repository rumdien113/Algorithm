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

const int N = 1e6+5;
const int MOD = 1e9+7;

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int n, ans = 0, dp[N];

int main() {
	fast;
  	indef();
  	memset(dp, 0, sizeof(dp));
  	cin >> n;
  	dp[0] = 1;
  	for (int i = 1; i <= n; i++) {
  		for (int j = 1; j <= 6; j++)
  			if (i-j >= 0)
  				(dp[i] += dp[i-j]) %= MOD; 
  			else break;
  	}
  	cout << dp[n];
	return 0;
}