#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define nln '\n'
#define ll long long

using namespace std;

ll t;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	cin >> t;
	while(t--) {
		
		ll n, h, a[1005];
		int cnt = 0;
		bool ok = true;

		cin >> n >> h;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n, greater<int>());
		ll 	sum = a[0] + a[1],
			f = h/sum;
		if (a[0] >= h)
			cnt = 1;
		else if (h - sum*f > 0)
			if (h - sum*f - a[0] > 0) cnt = f*2 + 2;
			else cnt = f*2 + 1;
		else if (h - sum*f == 0)
			cnt = f*2;
		else if (h - sum*f < 0)
			if (sum*f - h >= a[1]) cnt = f*2 - 1;
			else cnt = f*2;
		cout << cnt << nln;
	}

	return 0;
}
