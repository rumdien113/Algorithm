#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

#define nln '\n'
#define ll long long
#define FORI(q, w) for(int i = q; i < w; i++)
#define FORJ(q, w) for(int j = q; j < w; j++)

using namespace std;

int t;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);  cout.tie(NULL);
	
  	cin >> t;
  	while(t--) {
  		float a, b, c;
  		int ans;
  		cin >> a >> b >> c;
  		// cout << "abs(a-b)/2: " << abs(a-b)/2 << nln;
  		ans = ceil((abs(a-b)/2)/c);
  		cout << ans << nln;
  	}
	return 0;
}
