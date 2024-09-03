#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define db long double
#define st first
#define nd second
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
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

int t, n, a[N];

void sol() {
	ll pre[N];
	int ans = 0, mx = -1, zero = 0;
	pre[0] = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		if (a[i] == 0) zero++;
		pre[i] = pre[i-1] + a[i];
	}
	// for (int i = 1; i <= n; ++i)
	// 	cout << pre[i] << ' ' ;
	// cout << nl;
	for (int i = 1; i <= n; ++i) {
		mx = max(mx, a[i]);
		if ((pre[i] - mx) == pre[i]/2 && pre[i] % 2 == 0)
			ans++;
	}
	cout << ans << nl;
}

int main() {
	fast;
	indef();
	clock_t z = clock();

	cin >> t;
	while(t--)
		sol();

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}