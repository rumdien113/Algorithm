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

int n, m, ans[N]{0};
bool vis[N];
vi g[N];

void bfs(int s) {
	queue<int> q;
	q.push(s);
	vis[s] = 1;
	while(!q.empty()) {
		int u = q.front();
		q.pop();
		if (ans[u] == 0)
			ans[u] = 1;
		for (auto v : g[u]) {
			if (!vis[v]) {
				q.push(v);
				if (ans[u] == 1) ans[v] = 2;
				else if (ans[u] == 2) ans[v] = 1;
				vis[v] = 1;
			}
			else if (ans[v] == ans[u]) {
				cout << "IMPOSSIBLE";
				exit(0);
			}
		}
	}	
}

int main() {
	fast;
  	indef();
  	cin >> n >> m;
  	for(int i = 0; i < m; i++) {
  		int u, v;
  		cin >> u >> v;
  		g[u].pb(v);
  		g[v].pb(u);
  	}

  	for (int i = 1; i <= n; i++)
  		if (!vis[i])
  			bfs(i);
  	for (int i = 1; i <= n; i++)
  		cout << ans[i] << ' ';
	return 0;
}