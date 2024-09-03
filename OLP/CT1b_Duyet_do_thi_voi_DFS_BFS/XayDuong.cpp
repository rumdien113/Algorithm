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

int n, m, c, s, t;
vi g[N];
bool vis[N]{0};

void bfs(int s) {
	int cnt = 0;
	queue<int> q;
	q.push(s);
	vis[s] = 1;
	while(!q.empty()) {
		int u = q.front();
		q.pop();
		if (u == t) {
			cout << 0;
			exit(0);
		} else 
			cnt += c;
		for (auto v : g[u]) {
			if (!vis[v]) {
				vis[v] = 1;
				q.push(v);
			}
		}
	}
}

int main() {
	fast;
  	indef();
  	cin >> n >> m >> c;
  	for(int i = 0; i < m; i++) {
  		int u, v;
  		cin >> u >> v;
  		g[u].pb(v);
  		g[v].pb(u);
  	}
  	cin >> s >> t;
  	bfs(s);
  	cout << c;
	return 0;
}