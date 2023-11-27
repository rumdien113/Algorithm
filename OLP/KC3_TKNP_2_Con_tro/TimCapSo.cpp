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

int n, x;
vector<ll> a;

int Search(int l, int r, ll x) {
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (a[m] == x)
			return m;
		if (a[m] < x)
			l = m + 1;
		else
			r = m - 1;		
	}
	return -1;
}

int main() {
	fast;
  	indef();
  	cin >> n >> x;
  	for (int i = 0; i < n; i++) {
  		ll x; cin >> x;
  		a.pb(x);
  	}
  	for (int i = 0; i < n; i++) {
  		int ok = Search(0, n-1, x - a[i]);
  		if (ok != -1 && ok != i) {
  			cout << ++i << " " << ++ok;
  			exit(0);
  		}
  	}
  	cout << "No solution";
	return 0;
}

