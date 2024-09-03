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
const int N = 1e6+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

ll t;

void sol() {
	ll a, b, l;
	cin >> a >> b >> l;
	set<ll> ans;
	for(int i = 0; i <= 34; ++i) {
		ll x = l;
		bool fail = false;
		for (int _ = 0; _ < i; ++_) {
			if (x % a) {
				fail = true;
				break;
			}
			x /= a;
		}
		if (fail) break;
		while(true) {
			ans.insert(x);
			if (x % b) break;
			x /= b;
		}
	}
	cout << ans.size() << nl;
}

int main() {
	indef();
	fast;
	clock_t z = clock();

	cin >> t;
	while (t--)
		sol();

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}