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

int n, m, s;
vi g[N];
int dist[N]{M};
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<ii>> p;

// void bfs(int x) {
// 	if (x != s) 
// 		cnt[x] = cnt[x-1] + 1;
// 	queue<int> q;
// 	q.push(x);
// 	vis[x] = 1;
// 	while(!q.empty()) {
// 		int u = q.front();
// 		vis[u] = 1;
// 		q.push(u);
// 	}
// }

int main() {
	fast;
  	indef();
  	cin >> n >> m >> s;
  	for (int i = 1; i <= n; i++) dist[i] = M;
  	dist[s] = 0;
  	for (int i = 0; i < m; i++) {
  		int u, v;
  		cin >> u >> v;
  		g[u].pb(v);
  		g[v].pb(u); 
  	}
  	p.push({0, s});
  	while(!p.empty()) {
  		int u = p.top().nd;
  		int v = p.top().st;
  		p.pop();
  		for (int i : g[u])
  			if (dist[i] > dist[u] + 1) {
  				dist[i] = dist[u] + 1;
  				p.push({dist[i], i});
  			}
  	}
  	vector<ii> ans;
  	for (int i = 1; i <= n; i++)
  		if (dist[i] != M)
  			ans.pb({dist[i], i});
  	sort(all(ans));
  	for (ii it : ans)
  		cout << it.nd << ' ' << it.st << nl;
	return 0;
}
