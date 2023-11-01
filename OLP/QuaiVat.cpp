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

const int M = 1e6+7;
const int N = 1e3+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int n, m, plx, ply, ansx, ansy, f1[N][N], f2[N][N];
bool ok = false, vis1[N][N], vis2[N][N];
char par[N][N], ans[N];
vector<ii> mo;

void bfs1(int x, int y) {
	queue<ii> q;
	q.push({x, y});
	vis1[x][y] = 1;
	f1[x][y] = 0;
	while(!q.empty()) {
		ii u = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int dx = u.st + moveX[i], dy = u.nd + moveY[i];
			if (0 <= dx && dx < n && 0 <= dy && dy < m && !f1[dx][dy] && !vis1[dx][dy]) {
				f1[dx][dy] = f1[u.st][u.nd] + 1;
				if (i == 0) par[dx][dy] = 'R';
				else if (i == 1) par[dx][dy] = 'L';
				else if (i == 2) par[dx][dy] = 'D';
				else if (i == 3) par[dx][dy] = 'U';
				q.push({dx, dy});
				vis1[dx][dy] = 1;
			}
		}
	}	
}

void bfs2(int x, int y) {
	bool vis[N][N];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			vis[i][j] = vis2[i][j];
	queue<ii> q;
	q.push({x, y});
	vis[x][y] = 1;
	f2[x][y] = 0;
	while(!q.empty()) {
		ii u = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int dx = u.st + moveX[i], dy = u.nd + moveY[i];
			if (0 <= dx && dx < n && 0 <= dy && dy < m && !vis[dx][dy]) {
				if (f2[dx][dy] && !vis[dx][dy])
					f2[dx][dy] = min(f2[dx][dy], f2[u.st][u.nd] + 1);
				else f2[dx][dy] = f2[u.st][u.nd] + 1;
				q.push({dx, dy});
				vis[dx][dy] = 1;
			}			
		}
	}
}

void check() {
	for (int i = 0; i < n; i++)
  		for (int j = 0; j < m; j++)
  			if (i == 0 || j == 0 || i == n-1 || j == m-1)
  				if (f1[i][j] < f2[i][j] || f1[i][j] == 0) {
  					ok = true;
  					ansx = i; ansy = j;
  				}
}

int main() {
	fast;
  	indef();
  	cin >> n >> m;
  	for (int i = 0; i < n; i++)
  		for (int j = 0; j < m; j++) {
  			char c; cin >> c;
  			par[i][j] = '#';
  			if (c == 'A') { plx = i; ply = j; par[i][j] = 'A'; }
  			else if (c == 'M') { mo.pb({i, j}); }
  			if (c == '#') {
	  			f1[i][j] = -1;
	  			f2[i][j] = -1;
	  			vis1[i][j] = (c == '#');
	  			vis2[i][j] = (c == '#');
  			}
  		}
  	bfs1(plx, ply);
  	for (ii p : mo)
  		bfs2(p.st, p.nd);
  	for (ii p : mo)
  		f2[p.st][p.nd] = 0;
  	check();
  	if (!ok) {
  		cout << "NO";
  		exit(0);
  	}
  	cout << "YES" << nl << f1[ansx][ansy] << nl;
  	
  	ii u = {ansx, ansy};
  	for (int i = f1[ansx][ansy]; i > 0; i--) {
  		ans[i] = par[u.st][u.nd];
  		if (ans[i] == 'D') u = {u.st-1, u.nd};
  		else if (ans[i] == 'U') u = {u.st+1, u.nd};
  		else if (ans[i] == 'L') u = {u.st, u.nd+1};
  		else if (ans[i] == 'R') u = {u.st, u.nd-1};
  	}
  	for (int i = 1; i <= f1[ansx][ansy]; i++)
  		cout << ans[i];
  	cout << nl;

  	for (int i = 0; i < n; i++) {
  		for (int j = 0; j < m; j++)
  			cout << setw(2) << f2[i][j];
  		cout << nl;
  	}
  	cout << nl;
  	for (int i = 0; i < n; i++) {
  		for (int j = 0; j < m; j++)
  			cout << setw(2) << f1[i][j];
  		cout << nl;
  	}
  	cout << nl;
  	for (int i = 0; i < n; i++) {
  		for (int j = 0; j < m; j++)
  			cout << par[i][j];
  		cout << nl;
  	}
	return 0;
}
