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

int t, n, m, k, a[105][105] = {0};

void sol() {
	cin >> n >> m >> k;
	if (a[m][n] == k)
		cout << "YES" << nl;
	else cout << "NO" << nl;
}

int main() {
	fast;
  	indef();

  	a[1][1] = 0;
	for (int i = 1; i <= 105; ++i) {
		for (int j = 1; j <= 105; ++j) {
			if (j == 1)
				a[i][j] = i-1;
			else
				a[i][j] = a[i][j-1] + i;
  		}
	}

  	cin >> t;
  	while (t--)
  		sol();
  	return 0;
}