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

int t, n;
char a[2][105];

void sol() {
	cin >> n;
	int dp[n] = {0};
	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < n; ++j)
			cin >> a[i][j];
	dp[0] = 1;
	for (int i = 1; i < n; ++i) {
		if (a[0][i] == '1' && a[1][i] == '1') {
			cout << "NO" << nl;
			return;
		}
	}
	cout << "YES" << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while (t--)
  		sol();
  	return 0;
}