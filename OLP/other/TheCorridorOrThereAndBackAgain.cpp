#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

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
  		int n, d, s;
		vector<int> a;
  		cin >> n;
  		FORI(0, n) {
  			cin >> d >> s;
  			int x = d + (s-1)/2;
  			a.push_back(x);
  		}
  		sort(a.begin(), a.end());
  		cout << a[0] << nln;
  	}

	return 0;
}
