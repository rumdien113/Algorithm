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

int n, m, s, t, q;
vi g[N];

void bfs(int s, int t) {
	int cnt = 0;
	for (auto i : g[s])
		for (auto it : g[i])
			if (it == t)
				cnt++;
	cout << cnt << nl;
}

int main() {
	fast;
  	indef();
  	cin >> n >> m;
  	for (int i = 0; i < m; ++i) {
  		int u, v;
  		cin >> u >> v;
  		g[u].pb(v);
  		g[v].pb(u);
  	}
  	cin >> q;
  	while (q--) {
  		cin >> s >> t;
  		bfs(s, t);
  	}
  	return 0;
}