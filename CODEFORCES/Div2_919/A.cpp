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

bool comp(int a, int b) {
    return a > b;	
}

int t, n;

void sol() {
	ll a, x, mi = -1, mx = M, ans = 0;
	vi err;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a >> x;
		switch (a) {
			case 1:
				mi = max(mi, x);
				break;
			case 2:
				mx = min(mx, x);
				break;
			case 3:
				err.pb(x);
				break;
		}
	}
	if (mi > mx) {
		cout << 0 << nl;
		return;
	}
	sort(all(err));
	ans = mx - mi + 1;
	ll low = lower_bound(all(err), mi) - err.begin();
	ll hig = upper_bound(all(err), mx) - err.begin() - 1;
	// cout << "mi: " << mi << " mx: " << mx << nl;
	// cout << "err: ";
	// for (ll i : err)
	// 	cout << i << ' ';
	// cout << nl;
	// cout << "low: " << err[low] << '-' << low << nl;
	// cout << "hig: " << err[hig] << '-' << hig << nl;
	// cout << "mx - mi: " << ans << nl;
	// cout << "hig - low + 1: " << (hig - low + 1) << nl;
	ans -= (hig - low + 1);

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