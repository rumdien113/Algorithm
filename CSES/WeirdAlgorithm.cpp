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

ll n;

int main() {
	fast;
  	indef();
  	cin >> n;
  	while(n != 1) {
  		cout << n << " ";
  		if (n & 1) n = n * 3 + 1;
  			else n /= 2;
  	}
	cout << 1;
	return 0;
}
