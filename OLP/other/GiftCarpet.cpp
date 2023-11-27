//https://codeforces.com/contest/1862/problem/A
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
  	while(t--) {
  		int v = 0, i = 0, k = 0, a = 0;
  		int n, m;
  		cin >> n >> m;
  		vector<string> s(n);
  		for (int x = 0; x < n; x++)
  			cin >> s[x];

  		for (int x = 0; x < m; x++)
  			for (int y = 0; y < n; y++) {
				if (s[y][x] == 'v' && v == 1) continue;
				if (s[y][x] == 'i' && i == 1) continue;
				if (s[y][x] == 'k' && k == 1) continue;
				if (s[y][x] == 'a' && a == 1) continue;

  				if (s[y][x] == 'a' && v == 1 && i == 1 && k == 1) { a = 1; break; }
  				else if (s[y][x] == 'k' && v == 1 && i == 1) { k = 1; break; }
  				else if (s[y][x] == 'i' && v == 1) { i = 1; break; }
  				else if (s[y][x] == 'v') { v = 1; break; }
  				// cout << s[y][x] << " ";
  			}
  		if (v == 1 && i == 1 && k == 1 && a == 1) cout << "YES" << nln;
  		else cout << "NO" << nln;

  	}

	return 0;
}
