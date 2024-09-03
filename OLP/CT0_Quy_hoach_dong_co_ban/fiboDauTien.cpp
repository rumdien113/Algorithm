#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <utility>
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

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}
ll n, dp[100];
int main() {
	fast;
  	indef();
  	cin >> n;
  	dp[1] = 1;
  	dp[2] = 1;
  	cout << dp[1] << " " << dp[2] << " ";
  	for (int i = 3; i <= n; i++) {
  		dp[i] = dp[i-1] + dp[i-2];
  		cout << dp[i] << " ";
  	}
	return 0;
}
