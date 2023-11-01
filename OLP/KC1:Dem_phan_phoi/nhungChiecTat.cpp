#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <climits>
#include <utility>
#include <cstring>
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

int n, ans = 0;
unordered_map<int, int> m;

int main() {
	fast;
  	indef();
  	cin >> n;
  	for (int i = 0; i < n; i++){
  		int x; cin >> x;
  		m[x]++;
  	}
  	for (auto it = m.begin(); it != m.end(); it++){
  		ans += it->second / 2;
  	}
  	cout << ans;
	return 0;
}
