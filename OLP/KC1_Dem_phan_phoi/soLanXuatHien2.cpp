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

int n, a[100005];

int main() {
	fast;
  	indef();
  	memset(a, 0, sizeof(a));
  	cin >> n;
  	for (int i = 0; i < n; i++){
  		int x; cin >> x;
  		a[x]++;
  	}
  	for (int i = 1; i <= mx; i++)
  		if (a[i] > 0)
  			cout << i << " " << a[i] << nln;
	return 0;
}
