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

int n, k, a[N], dp[N];

int main() {
	fast;
  	indef();
  	cin >> n >> k;
  	for (int i = 0; i < n; i++)
  		cin >> a[i];
  	dp[1] = abs(a[0] - a[1]);
  	for (int i = 2; i < n; i++) {
  		int tmp = M;
  		for (int j = max(0, i-k); j < i; j++)
  			tmp = min(tmp, dp[j] + abs(a[i] - a[j]));
  		dp[i] = tmp;
  	}
  	cout << dp[n-1];
	return 0;
}
