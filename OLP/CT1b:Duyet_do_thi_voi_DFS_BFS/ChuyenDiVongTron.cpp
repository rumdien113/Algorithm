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

int n, m, x, y, cnt = 0;
bool found = 0;
vi g[N];
vi par(N);
vector<bool> vis(N);

bool dfs(int u, int p) {
	vis[u] = true;
	par[u] = p;
	for (auto  v : g[u]) {
		if (v == p) continue;
		if (vis[v]) {
			x = v; y = u;
			return true;
		}
		if (!vis[v])
			if (dfs(v, u)
)				return true;
	}
	return false;
}

bool sol() {
	for (int i = 1; i <= n; i++)
		if (!vis[i])
			if (dfs(i, -1)) return true;
	return false;
}

int main() {
	fast;
  	indef();
  	cin >> n >> m;
  	for (int i = 0; i < m; i++) {
  		int u, v; cin >> u >> v;
  		g[u].pb(v);
  		g[v].pb(u);
  	}
  	if (!sol()) {
  		cout << "IMPOSSIBLE";
  		return 0;
  	}

  	int t = y;
  	vi ans;
  	ans.pb(y);
  	while(t != x) {
  		ans.pb(par[t]);
  		t = par[t];
  	}
  	ans.pb(y);
  	cout << ans.size() << nl;
  	for (auto it : ans)
  		cout << it << ' ';

	return 0;
}