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
const int N = 1e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

ll n, x, q, l, r, ans = 0, a[N], s[N];

int main() {
	fast;
  	indef();
  	cin >> n >> x >> q;
  	s[0] = 0;
  	for (int i = 1; i <= n; ++i) {
  		cin >> a[i];
  		if (i == 1) s[i] = a[i];
  		else s[i] = s[i-1] + a[i];
  	}

  	// for (int i = 1; i <= n; ++i)
  	// 	cout << s[i] << ' ';
  	// cout << nl << nl;
  	
  	while(q--) {
  		cin >> l >> r;
  		ll sum = s[r] - s[l-1];
  		
  		// int sum2 = 0;
  		// for (int i = l; i <= r; ++i) {
  		// 	cout << s[i] << ' ';
  		// 	sum2 += a[i];
  		// }
  		// cout << nl;
  		// cout << l << ' ' << r << " -> " << sum << " => " << sum2 << nl << nl;

  		if (sum < x) ans++;
  	}
  	cout << ans;
  	return 0;
}