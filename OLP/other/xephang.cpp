#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define nln '\n'
#define ll long long

using namespace std;

ll n;
bool ok = true;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);  cout.tie(NULL);
	
  	cin >> n;
  	vector<ll> a(n);
  	vector<ll> ans;

  	for (int i = 0; i < n; i++)
  		cin >> a[i];
  	sort(a.begin(), a.end(), greater<ll>());
  	ans.push_back(a[0]);
  	for (int i = 1; i < n; i++) {
  		if (ok) {
  			ans.push_back(a[i]);
  			ok = false;
  		}
  		else {
  			ans.insert(ans.begin(), a[i]);
  			ok = true;
  		}
  	}
  	for (int i : ans)
  	cout << i << " ";
	return 0;
}
