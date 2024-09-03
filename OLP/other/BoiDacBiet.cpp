#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <utility>
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
#define nln '\n'
#define ll long long
#define X first
#define Y second

using namespace std;

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

ll n, p, x = 9, k = 10, cnt = 0;

int main() {
	fast;
  	indef();
  	cin >> p >> n;
  	if (n == 0) {
  		cout << 0 << nln; 
  		exit(0);
  	} else
	  	for (int i = 0; i < n; i++) {
	  		if (x%p == 0) {cnt = i+1; break;}
	  		x += 9 * k;
	  		k *= 10;
	  	}

	cout << n/cnt;

	return 0;
}
