#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define nln '\n'
#define ll long long
#define FORI(q, w) for(int i = q; i < w; i++)
#define FORJ(q, w) for(int j = q; j < w; j++)

using namespace std;

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

ll t;

int main() {
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);  cout.tie(NULL);
  	indef();
  	
	cin >> t;
	while(t--) {
		ll n, x, y;
		cin >> n >> x >> y;
		if (x == y) cout << 0 << nln;
		else {
			ll lcm = (x*y) / __gcd(x, y);
			x = n/x - (n/lcm);
			y = n/y - (n/lcm);
			ll ans = x * (n+(n-x+1))/2 - y*(y+1)/2;
			cout << ans << nln;
		}
	}

	return 0;
}
