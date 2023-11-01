#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define nln '\n'
#define ll long long
#define FORI(k, q, w) for(int k = q; k < w; k++)
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
		int n; cin >> n;
		vector<int> a(n);
		int k = 0;
		for (int i = 1; i <= n; i += 2)
			for (int j = i; j <= n; j *= 2)
				a[k++] = j;
		for (int i : a)
			cout << i << " ";
		cout << nln;
	}

	return 0;
}
