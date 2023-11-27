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

const int M = 1e8+7;
const int N = 1e6+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int m, n, s, t, par[N], dist[N];
vi g[N];
bool vis[N]{0};

void bfs(int s) {
	queue<int> q;
	q.push(s);
	vis[s] = 1;
	while(!q.empty()) {
		int u = q.front();
		q.pop();
		for (auto v : g[u])
			if (!vis[v])
				if (dist[v] > dist[u] + 1) {
					dist[v] = dist[u] + 1;
					q.push(v);
					par[v] = u;
				}
	}
}

int main() {
	fast;
  	indef();
  	cin >> n >> m >> s >> t;
  	for (int i = 1; i <= n; i++) dist[i] = M;
  	dist[s] = 0;
  	par[s] = s;
  	vis[s] = 1;
  	for (int i = 0; i < m; i++) {
  		int u, v; cin >> u >> v;
  		g[u].pb(v);
  	}
  	for (int i = 1; i <= n; i++)
  		sort(all(g[i]));
  	bfs(s);
  	
  	vi path;
  	while(s) {
  		path.pb(t);
  		if (t == s) break;
  		t = par[t];
  	}
  	reverse(all(path));
  	for (int it : path)
  		cout << it << ' ';
	return 0;
}