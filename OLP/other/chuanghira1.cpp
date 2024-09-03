#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define nln '\n'
#define ll long long

using namespace std;

int t;
string yes = "YES\n", no = "NO\n";
bool ok() {
	int n, a[55];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a+n);
	for (int i = 0; i < n-1; i++)
		if (abs(a[i] - a[i+1]) > 1)
			return false;
	return true;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	cin >> t;
	while (t--) {
		if (ok())
			cout << yes;
		else
			cout << no;
	}

	return 0;
}
