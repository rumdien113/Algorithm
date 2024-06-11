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
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];
	map<ll, ll> m;
	ll s = 0;
	m[0] = 1;
	for (int i = 0; i < n; ++i) {
		a[i] *= ((i & 1) ? 1 : -1);
		s += a[i];
		if (m[s]) {
			cout << "YES" << nl;
			return;
		}
		++m[s];
	}	
	cout << "NO" << nl;
}

int main() {
	fast;
	indef();
	clock_t z = clock();

	cin >> t;
	while (t--)
		sol();

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}