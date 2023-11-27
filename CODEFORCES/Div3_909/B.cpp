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
#define vi vector<ll>

const ll M = 1e18+7;
const int N = 1e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int t;

void sol() {
	int n;
	cin >> n;
	ll ans = -M, a[n+5];
	for (int i = 0; i < n; ++i)	cin >> a[i];
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) {
			ll mii = M, mxx = -M;
			for (int j = 0; j < n; j += i) {
				ll sum = 0;
				for (int x = j; x < j + i; ++x)
					sum += a[x];
				mii = min(mii, sum);
				mxx = max(mxx, sum);
			}
			ans = max(ans, mxx - mii);
		}
    }
    cout << ans << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--) 
  		sol();
  	return 0;
} 