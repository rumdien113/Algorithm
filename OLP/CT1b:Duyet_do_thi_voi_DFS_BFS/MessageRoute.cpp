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
int n, m;
vi g[N];
vi par;
bool vis[N]{0};

void bfs() {
	vis[1] = 1;
	queue<int> q;
	q.push(1);
	while(!q.empty()) {
		int u = q.front();
		q.pop();
		for (auto i : g[u]) {
			if (!vis[i]) {
				vis[i] = 1;
				par[i] = u;
				q.push(i);
			}
		}
	}
}

int main() {
	fast;
  	indef();
  	cin >> n >> m;
  	for (int i = 0; i <= n; i++)
  		par.pb(-1);
  	for (int i = 0; i < m; i++) {
  		int u, v;
  		cin >> u >> v;
  		g[u].pb(v);
  		g[v].pb(u);
  	}
  	bfs();
  	if (par[n] == -1) {
  		cout << "IMPOSSIBLE";
  		exit(0);
  	}
  	int curr = n;
  	stack<int> st;
  	while(curr != -1) {
  		st.push(curr);
  		curr = par[curr];
  	}
  	cout << st.size() << nl;
  	while(!st.empty()) {
  		cout << st.top() << ' ';
  		st.pop();
  	}
	return 0;
}