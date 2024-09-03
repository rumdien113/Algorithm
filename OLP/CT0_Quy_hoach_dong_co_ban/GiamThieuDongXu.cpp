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
const int N = 1e6+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

ll n, x, a[105], dp[N];

int main() {
	fast;
  	indef();
  	memset(dp, M, sizeof(dp));
  	dp[0] = 0;
  	cin >> n >> x;
  	for (int i = 0; i < n; i++)
  		cin >> a[i];
  	for (int i = 1; i <= x; i++)
  		for (int j = 0; j < n; j++)
  			if (i - a[j] >= 0)
  				dp[i] = min(dp[i], dp[i-a[j]] + 1);
  	cout << (dp[x] >= N ? -1 : dp[x]);
	return 0;
}
