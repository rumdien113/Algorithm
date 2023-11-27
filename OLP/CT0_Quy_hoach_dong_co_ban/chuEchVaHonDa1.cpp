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

int n, a[N], dp[N];

int main() {
	fast;
  	indef();
  	cin >> n;
  	for (int i = 1; i <= n; i++)
  		cin >> a[i];
  	dp[1] = 0;
  	dp[2] = abs(a[2]-a[1]);
  	for (int i = 3; i <= n; i++)
  		dp[i] = min(dp[i-2] + abs(a[i-2]-a[i]), dp[i-1] + abs(a[i-1]-a[i]));
  	cout << dp[n];
	return 0;
}
