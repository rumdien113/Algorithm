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

int n, a[200005];

int main() {
	fast;
  	indef();
  	cin >> n;
  	ll ans = 0;
  	for (int i = 0; i < n; i++){
  		cin >> a[i];
  		if(i > 0){
  			ans += max(0, a[i - 1] - a[i]);
  			a[i] = max(a[i],a[i-1]);
  		}
  	}
  	cout << ans;
	

	return 0;
}
