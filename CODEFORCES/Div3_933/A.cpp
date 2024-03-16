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
const int N = 1e3+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int t, n, m, k;

void sol() {
	int x, ans = 0, b[N];
	map<int, int> mp;
	cin >> n >> m >> k;
	for (int i = 0; i < n; ++i)
		cin >> b[i];
	for (int i = 0; i < m; ++i) {
		cin >> x;
		mp[x]++;
	}
	sort(b, b+n);
	for (int i = 0; i < n; ++i) {
		if (b[i] > k)
			break;
		for (auto j : mp)
			if (b[i] + j.st <= k)
				ans += j.nd;
	}
	cout << ans << nl;
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