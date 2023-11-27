#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <utility>

#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
#define rall(x) (x).rbegin(), (x).rend()
#define nln '\n'
#define ll long long
#define X first
#define Y second
#define pb push_back

using namespace std;
void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int t;

void solve() {
	ll n; cin >> n;
	vector<ll> a(n), kame, galic;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (a[i]) galic.pb(x);
		else kame.pb(x);
	}
	sort(rall(kame)); sort(rall(galic));
	ll ans = 0, sKame = kame.size(), sGalic = galic.size();
	if (sKame >= sGalic) {
		for (int i = 0; i < sGalic; i++)
			ans += (kame[i] + galic[i]) * 2;
		if (sKame == sGalic) ans -= min(kame[sGalic-1], galic[sKame-1]);
		else 
			for (int i = sGalic; i < sKame; i++)
				ans += kame[i];
	} else {
		for (int i = 0; i < sKame; i++)
			ans += (kame[i] + galic[i]) * 2;
		if (sGalic >= sKame + 1) ans += galic[sKame];
		for (int i = sKame+1; i < sGalic; i++)
			ans += galic[i];
	}	
	cout << ans << nln;
}

int main() {
	fast;
  	indef();
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
