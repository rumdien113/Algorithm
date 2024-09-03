#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <utility>
#include <math.h>
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
#define nln '\n'
#define ll long long
#define X first
#define Y second
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

ll t, x, y;

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--) {
  		cin >> x >> y;
  		if (x < y) {
  			if (y & 1) cout << y*y - x + 1 << nln;
  			else cout << (y-1)*(y-1) + x << nln;
  		} else {
  			if (x & 1) cout << (x-1)*(x-1) + y << nln;
  			else cout << x*x - y + 1 << nln;
  		}
  	}
	return 0;
}
