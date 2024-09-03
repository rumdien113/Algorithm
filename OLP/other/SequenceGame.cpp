#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define nln '\n'
#define ll long long

using namespace std;

int t;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);  cout.tie(NULL);
	
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<ll> a;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			if (i && a.back() > x)
				a.push_back(1);
			a.push_back(x);
		}
		cout << a.size() << nln;
		for (int i : a)
			cout << i << " ";
		cout << nln;
	}

	return 0;
}
