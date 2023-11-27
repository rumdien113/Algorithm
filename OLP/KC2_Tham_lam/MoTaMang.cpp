#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define db long double
#define X first
#define Y second
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

ll n, m, a[N], dp[N][105];

void show() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= m; j++)
			cout << dp[i][j] << " ";
		cout << nl;
	}
	cout << nl;
}

int main() {
	fast;
  	indef();
  	cin >> n >> m;
  	memset(dp, 0, sizeof(dp));
	for(int i=0;i<n;i++) cin >> a[i];
	if(a[0]) dp[0][a[0]] = 1;
	else fill(dp[0],dp[0] + 105,1);
	show();
	for(int i=1;i<n;i++){
	    if(a[i]){
	    	cout << "i:" << i << " " << "a[i]:" << a[i] << nl;
	        dp[i][a[i]] += dp[i-1][a[i]];
	        dp[i][a[i]] += (a[i] - 1 > 0)*(dp[i - 1][a[i] - 1]);
	        dp[i][a[i]] += (a[i] + 1 <=m)*(dp[i - 1][a[i] + 1]);
	        dp[i][a[i]] %= M;
	        show();
	    }
	    else{
	        for(int j=1;j<=m;j++){
	        	cout << "i:" << i << " " << "j:" << j << nl;
	            dp[i][j] += dp[i-1][j];
	            dp[i][j] += (j - 1 > 0)*(dp[i - 1][j - 1]);
	            dp[i][j] += (j + 1 <=m)*(dp[i - 1][j + 1]);
	            dp[i][j] %= M;
	            show();
	        }
	    }
	}
	ll ans = 0;
	for(int i=1;i<=m;i++){
	    (ans += dp[n-1][i]) %= M; 
	    cout << "ans:" << ans << " " << "dp:" << dp[n-1][i]  << nl;
	}
	return 0;
}

