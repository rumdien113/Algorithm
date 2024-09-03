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
const int N = 1e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int n, k = 1;
vector<ii> dp;

int main() {
	fast;
  	indef();
  	cin >> n;
  	dp.resize(n+1);
  	dp[1] = {1, 1};
  	for(int i = 2; i <= n; ++i) {
  		dp[i].st = dp[i-1].st + dp[i-1].nd*2 + 2;
  		dp[i].nd = dp[i-1].nd + 2;
  	}
  	cout << dp[n].st;
  	return 0;
}