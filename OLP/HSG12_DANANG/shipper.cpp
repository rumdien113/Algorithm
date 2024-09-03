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
const int N = 1e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

ll n, m;
map<ll, ll> mp;

int main() {
	fast;
	freopen("SHIPPER.INP","r",stdin);
	freopen("SHIPPER.OUT","w",stdout);
	clock_t z = clock();

	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		mp[x]++;
	}
	int ans = 0;
	for (auto i : mp)
		if (i.nd <= m && i.nd >= ans)
			ans = i.nd;
	cout << ans;	

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}