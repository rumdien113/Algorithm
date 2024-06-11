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

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int t, n;

void sol() {
	cin >> n;
	int ans, mx = -1;
	for (int i = 2; i <= n; ++i) {
		int tmp = 0;
		for (int j  = 1; j < n; ++j) {
			if (i * j > n) break;
			tmp += i * j;
		}
		// cout << i << " : " << tmp << nl;
		if (tmp > mx) {
			mx = max(mx, tmp);
			ans = i;
		}
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