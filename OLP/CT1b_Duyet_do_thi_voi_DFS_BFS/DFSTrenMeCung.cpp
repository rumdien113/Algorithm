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

const int M = 1e7+7;
const int N = 1e3+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int n, m, ax, ay, bx, by, dis[N][N];
bool vis[N][N];
char par[N][N], ans[M];
queue<ii> q;

int main() {
	fast;
  	indef();
  	cin >> n >> m;
  	for (int i = 0; i < n; i++)
  		for (int j = 0; j < m; j++) {
  			char x; cin >> x;
  			if (x == '#') vis[i][j] = true;
  			else if (x == 'A') {
  				ax = i; ay = j;
  				vis[i][j] = true;
  			}
  			else if (x == 'B') {
  				bx = i; by = j;
  			}
  		}
  	q.push({ax, ay});
  	while(!q.empty()) {
  		ii u = q.front(); q.pop();
  		for (int i = 0; i < 4; i++) {
  			int dx = u.st + moveY[i], dy = u.nd + moveX[i];
  			if (0 <= dx && dx < n && 0 <= dy && dy < m && !vis[dx][dy]) {
				dis[dx][dy] = dis[u.st][u.nd] + 1;
  				if (i == 0) par[dx][dy] = 'D';
				else if (i == 1) par[dx][dy] = 'U';
				else if (i == 2) par[dx][dy] = 'R';
				else if (i == 3) par[dx][dy] = 'L';
				vis[dx][dy] = 1;
				q.push({dx, dy});

  			}
  		}
  	}
  	if (!vis[bx][by]) {
  		cout << "NO";
  		exit(0);
  	}
  	ii u = {bx, by};
  	cout << "YES" << nl << dis[bx][by] << nl;
  	for (int i = dis[bx][by]; i > 0; i--) {
  		ans[i] = par[u.st][u.nd];
  		if (ans[i] == 'D') u = {u.st-1, u.nd};
  		else if (ans[i] == 'U') u = {u.st + 1, u.nd};
  		else if (ans[i] == 'R') u = {u.st, u.nd - 1};
  		else if (ans[i] == 'L') u = {u.st, u.nd + 1};
  	}
  	for (int i = 1; i <= dis[bx][by]; i++)
  		cout << ans[i];	
	return 0;
}