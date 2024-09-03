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

int r, c, r1, c1, r2, c2, dis[105][105];
bool vis[105][105];

void bfs(int x, int y) {
	queue<ii> q;
	q.push(make_pair(x, y));
	vis[x][y] = 1;
	while(!q.empty()) {
		ii u = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int dx = u.st + moveY[i], dy = u.nd + moveX[i];
			if (0 <= dx && dx < r && 0 <= dy && dy < c && !vis[dx][dy]) {
					dis[dx][dy] = dis[u.st][u.nd] + 1;
					q.push(make_pair(dx, dy));
					vis[dx][dy] = 1;
			}
			if (dx == r2 && dy == c2) {
				cout << dis[dx][dy] << nl;
				return;
			}
		}
	}
}

int main() {
	fast;
  	indef();
  	cin >> r >> c;
  	for (int i = 0; i < r; i++)
  		for (int j = 0; j < c; j++)
  			dis[i][j] = M;
  	for (int i = 0; i < r; i++)
  		for (int j = 0; j < c; j++) {
  			char x; cin >> x;
  			if (x == 'B') {
  				r1 = i; c1 = j;
  			} else if (x == 'C') {
  				r2 = i; c2 = j;
  			}
  			vis[i][j] = (x == '*');
  		}
  	dis[0][0] = 0;
  	bfs(r1, c1);
    // for (int i = 0; i < r; i++) {
  	// 	for (int j = 0; j < c; j++) {
  	// 		if (dis[i][j] == M) cout << "* ";
  	// 		else cout << dis[i][j] << ' ';
  	// 	}
  	// 	cout << nl;
    // }
	return 0;
}