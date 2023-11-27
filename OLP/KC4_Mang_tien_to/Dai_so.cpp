#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define db long double
#define st first
#define nd second
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define nl '\n'
#define ii pair<int,int>
#define vi vector<int>

const int M = 1e9+7;
const int N = 2e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int n, ans = 0, a[N], pre[N], pe[N];

int main() {
	fast;
  	indef();
  	cin >> n;
  	pre[0] = 0;
  	for (int i = 1; i <= n; ++i) {
  		cin >> a[i];
  		pre[i] = pre[i-1] + a[i];
  	}
  	pe[0] = 0;
  	for (int i = n; i >= 0; --i)
  		pe[n-i+1] = pe[n-i] + a[i];
  	for (int i = 1; i <= n; ++i)
  		// if (pre[i] == pe[i])
  		// 	ans++;
  		cout << pre[i] << " - " << pe[i] << nl;
  	// for (int i = 1; i < n; i++) {
  	// 	int sum = 0;
  	// 	for (int j = i+1; j <= n; ++j) {
  	// 		if (sum > pre[i]) break;
  	// 		sum += a[j];
  	// 	}
  	// 	if (sum == pre[i])
  	// 		ans++;
  	// }
  	cout << ans;
  	return 0;
}