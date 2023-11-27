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
bool visited[N]{false};
vi g[N];
vi city;

void dfs(int u) {
	visited[u] = 1;
	for (int i : g[u])
		if (!visited[i])
			dfs(i);
}

int main() {
	fast;
  	indef();
  	cin >> n >> m;
  	for (int i = 0; i < m; i++) {
  		int u, v;
  		cin >> u >> v;
  		g[u].pb(v);
        g[v].pb(u);
  	}
  	for (int i = 1; i <= n; i++)
  		if (!visited[i]) {
  			city.pb(i);
  			dfs(i);	
  		} 
  	int size = city.size();
  	cout << size -1 << nl;
  	for (int i = 0; i < size - 1; i++) {
  		cout << city[i] << ' ' << city[i+1] << nl;
  	}
	return 0;
}