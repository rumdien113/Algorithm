#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define nln '\n'
#define ll long long

using namespace std;

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

const int N = 2e5+5;
ll n, k, t, ma = 0;
int a[N];

int main() {
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);  cout.tie(NULL);
	indef();

	cin >> n >> k;
	for (int i = 1; i <= n; i++) { cin >> a[i]; }

	sort(a, a+n);
	int mid = (n+1) / 2;

	cout << "mid" << mid << nln;
	cout << k/(n-mid+1) << nln;
	cout << a[mid] << nln;
	cout << a[mid] + (k/(n-mid+1)) << nln;
	return 0;
}