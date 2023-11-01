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

int c, n, e, b1, b2, dis[N];
bool vis[N];
vi g[N];

void bfs(int s) {
	queue<int> q;
	q.push(s);
	vis[s] = 1;
	while(!q.empty()) {
		int u = q.front();
		q.pop();
		for (auto v : g[u])
			if (!vis[v]) {
				dis[v] = dis[u] + 1;
				vis[v] = 1;
				q.push(v);
			}
	}
}

int main() {
	fast;
  	indef();
  	cin >> n >> c;
  	for (int i = 0; i < n; i++) {
  		cin >> e >> b1 >> b2;
  		g[e].pb(b1);
  		g[e].pb(b2);
  	}
  	dis[1] = 1;
  	bfs(1);
  	for (int i = 1; i <= n; i++)
  		cout << dis[i] << nl;
	return 0;
}