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

const ll M = 1e18+7;
const int N = 2e5+5;

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
	ll n, a[N], l = 0, ans = -M;
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];
	for (int i = 0; i < n; ++i) {
		if ((a[i-1]%2==0 && a[i]%2==0) || (a[i-1]%2!=0 && a[i]%2!=0)) {
			ll sum1 = 0, sum2 = -M;
			for (int j = l; j < i; ++j) {
				sum1 += a[j];
				sum2 = max(sum1, sum2);
				if (sum1 < 0) sum1 = 0;
			}
			ans = max(ans, sum2);
			l = i;
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