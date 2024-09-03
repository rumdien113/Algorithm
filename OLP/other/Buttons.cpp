#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define nln '\n'
#define ll long long
#define FORI(q, w) for(int i = q; i < w; i++)
#define FORJ(q, w) for(int j = q; j < w; j++)

using namespace std;

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int t;

int main() {
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);  cout.tie(NULL);
  	indef();
  	
	cin >> t;
	while(t--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == b)
			if (c & 1) cout << "First" << nln;
			else cout << "Second" << nln;
		else if (a > b)
			cout << "First" << nln;
		else cout << "Second" << nln;
	}
	return 0;
}
