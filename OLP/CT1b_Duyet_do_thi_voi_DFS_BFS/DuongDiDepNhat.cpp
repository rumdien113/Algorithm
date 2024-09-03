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
const int N = 1e6+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int m, n, s, t, par[N];
vi g[N];
vi res;
bool vis[N];

void trace(int u) {
	if (u == par[u]) {
		res.pb(u);
		return;
	}
	res.pb(u);
	u = par[u];
	trace(u);
}

void dfs(int ss) {
	stack<int> st;
	st.push(ss);
	while(!st.empty()) {
		int u = st.top();
		vis[u] = 1;
		if (u == t) {
			trace(t);
			return;
		}
		st.pop();
		for(auto v : g[u]) {
			if (vis[v] == 1) continue;
			par[v] = u;
			st.push(v);
		}
	}
}

int main() {
	fast;
  	indef();
  	cin >> n >> m >> s >> t;
  	//lưu các cung
  	for (int i = 0; i < m; i++) {
  		int u, v; cin >> u >> v;
  		g[u].pb(v);
  	}
  	//lát nữa dùng stack nên sort giảm dần
  	for (int i = 1; i <= n; i++)
  		sort(all(g[i]), greater<int>());
  	//par[u] là đỉnh cha của u
  	par[s] = s; //s là root nên đỉnh cha của s là s
  	dfs(s);
	reverse(all(res));
	for (auto i : res)
		cout << i << ' ';

  	// for (int i = 1; i <= n; i++) {
  	// 	cout << i << " --> ";
  	// 	for (int it : g[i])
  	// 		cout << it << ' ';
  	// 	cout << nl;
  	// }
	return 0;
}
