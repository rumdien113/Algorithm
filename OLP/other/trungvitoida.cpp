#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <math.h>

#define nln '\n'
#define ll long long

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
  	cin.tie(NULL); 	cout.tie(NULL);
	indef();

	cin >> t;
	while(t--) {
		ll n, s;
		cin >> n >> s;
		int m = (n+1) / 2;
		cout << s / (n-m+1) << nln;
	}
	return 0;
}
