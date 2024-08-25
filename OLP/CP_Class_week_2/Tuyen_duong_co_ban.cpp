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

int n, x, y;
vi g[N], ans;
bool vis[N];
 
bool dfs(int u) {
	vis[u] = 1;
	ans.pb(u);
	if (u == y) return true;
	for (int i : g[u]) {
		if (!vis[i])
			if (dfs(i)) return true;
	}
	ans.pop_back();
	return false;
}

int main() {
	fast;
	indef();
	clock_t z = clock();

	cin >> n >> x >> y;
	for (int i = 0; i < n; ++i) {
		int u, v;
		cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	dfs(x);
	for (int i : ans)
		cout << i << ' ';

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}