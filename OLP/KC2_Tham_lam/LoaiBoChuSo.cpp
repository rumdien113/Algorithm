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
int n;
int main() {
	fast;
  	indef();
  	cin >> n;
  	vector<int> dp(n+1, M);
  	dp[0] = 0;
  	for (int i = 0; i <= n; i++) {
  		int tmp = i;
	  		while (tmp > 0) {
  			dp[i] = min(dp[i], dp[i-tmp%10] + 1);
  			tmp /= 10;
  		}
  	}
  	cout << dp[n];
	return 0;
}

