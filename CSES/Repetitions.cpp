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

string s;
int cnt = 1, ans;

int main() {
	fast;
  	indef();
  	
	cin >> s;
	int sz = s.size();
	for (int i = 0; i < sz; i++) {
		ans = max(ans, cnt);
		if (s[i] == s[i+1])
			cnt++;
		else cnt = 1;
	}
	cout << ans;
	return 0;
}
