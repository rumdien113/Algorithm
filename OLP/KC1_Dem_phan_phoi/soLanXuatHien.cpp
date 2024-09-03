#include <iostream>
#include <vector>
#include <algorithm>
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

int n, a[100005], b[100005];

int main() {
	fast;
  	indef();
  	memset(b, 0, sizeof(b));
  	cin >> n;
  	for (int i = 1; i <= n; i++) {
  		cin >> a[i];
  		b[a[i]]++;
  	}
  	for (int i = 1; i <= n; i++)
  		cout << a[i] << " " << b[a[i]] << nln;
	return 0;
}
