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
const int N = 1e3+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

ll n, a[N][N];
bool ok[N][N];

int main() {
	fast;
  	indef();
  	cin >> n;
  	for (int i = 0; i < n; ++i)
  		for (int j = 0; j < n; ++j) {
  			char x; cin >> x;
  			if (i == 0 && j == 0 && x == '*') {
				cout << 0;
				return 0;  				
  			}
			ok[i][j] = (x == '.');
  			a[i][j] = 0;
  		}
  	a[0][0] = 1;
  	for (int i = 0; i < n; ++i)
  		for (int j = 0; j < n; ++j) {
  			if (i == 0 && j == 0) continue;
  			if (ok[i][j]) {
  				if (i == 0) a[i][j] = a[i][j-1] % M;
  				else if (j == 0) a[i][j] = a[i-1][j] % M;
  				else a[i][j] = (a[i-1][j] + a[i][j-1]) % M;
  			}
		}
  	// for (int i = 0; i < n; ++i) {
  	// 	for (int j = 0; j < n; ++j)
  	// 		cout << a[i][j];
  	// 	cout << nl;
  	// }
  	cout << a[n-1][n-1];
  	return 0;
}