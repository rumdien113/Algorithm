#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define db long double
#define X first
#define Y second
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

ll n, x, y, mx = 0, mi = M, a[N], f[N];

int main() {
	fast;
  	indef();
  	cin >> n;
  	for (int i = 0; i < n; i++) {
  		cin >> a[i];
  		if (mi > a[i]) {
  			mi = a[i];
  			x = i;
  		}
  		if (i < n-1)
  			f[i] = x;
  	}
  	for (int i = 1; i < n; i++) {
  		if (a[i] - a[f[i-1]] > mx) {
  			mx = a[i] - a[f[i-1]];
  			y = i;
  			x = f[i-1];
  		}
  	}
  	cout << ++x << " " << ++y << nl << mx;
	return 0;
}