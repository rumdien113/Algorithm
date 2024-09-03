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
const int N = 1e3+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

ll n, m, dp[N][N];
char a;

int main() {
	fast;
  	indef();
  	cin >> m >> n;
  	memset(dp, 0, sizeof(dp));
  	cin >> a;
  	dp[1][1] = (a == '.');
  	for (int i = 1; i <= m; i++)
  		for (int j = 1; j <= n; j++) {
			dp[i][j] += (a == '.')*(dp[i-1][j] + dp[i][j-1]) % M;
  			cin >> a;
  		}
  	// for (int i = 0; i <= m; i++) {
  	// 	for (int j = 0; j <= n; j++)
  	// 		cout << dp[i][j] << " ";
  	// 	cout << nl;
  	// }
  	cout << dp[m][n];
	return 0;
}
