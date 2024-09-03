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

int n, m, k, mi = M, cnt = 0, p[N], w[N];
vector<pair<int, int>> g[N];
bool vis[N]{0};

void bfs(int s) {
	vis[s] = 1;
	queue<int> q;
	q.push(s);
	while(!q.empty()) {
		int u = q.front();
		q.pop();
		for (auto v : g[u]) {
			if (v.nd < mi)
				continue;
			if (!vis[v.st]) {
				q.push(v.st);
				vis[v.st] = 1;
			}
		}
	}
}

int main() {
	fast;
  	indef();
  	cin >> n >> m >> k;
  	for (int i = 0; i < k; i++) {cin >> p[i]; mi = min(mi, p[i]);}
  	for (int i = 0; i < m; i++) {
  		int u, v, w; cin >> u >> v >> w;
  		g[u].pb({v, w});
  		g[v].pb({u, w});
  	}
  	for (int i = 1; i <= n; i++) {
  		if (!vis[i]) {
  			bfs(i);
  			cnt++;
  		}
  		cout << nl;
  	}
  	cout << cnt;
	return 0;
}