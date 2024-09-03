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

int t;

void sol() {
	ll c, p, n, nn, t, tt, ans = 0;
	cin >> c >> p >> n >> nn >> t >> tt;
	for (ll l = 0, r = c/p; l <= r;) {
		ll mid = l + (r - l) / 2;
		if (mid/n*t + mid/nn*tt + p*mid <= c) {
			ans = mid;
			l = mid + 1;
		} else 
			r = mid - 1;
	}
	cout << ans << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while (t--) {
  		sol();
  	}
	return 0;
}