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
const int N = 2e5+5;

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
	ll x, ans = 0, mx = -1, dp[N] {0};
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (dp[x] == 0)
			dp[x] = 1;
		else dp[x]++;
		mx = max(mx, x);
	}

	for (int i = 1; i <= mx+1; ++i) {
		if (dp[i] > 1)
			dp[i+1]++;
		if (dp[i] != 0)
			ans++;
	}
	cout << ans << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--)
  		sol();
  	return 0;
}