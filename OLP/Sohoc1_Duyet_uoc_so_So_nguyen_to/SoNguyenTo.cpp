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
const int N = 1e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int n, a[N];
vi v;

bool ok(int x) {
	if (x < 2)
		return false;
	for (int i = 2; i <= x/i; ++i)
		if (x % i == 0)
			return false;
	return true;
}

int main() {
	fast;
  	indef();
  	cin >> n;
  	for (int i = 1; i <= n; ++i) {
  		cin >> a[i];
  		v.pb(a[i]);
  	}
  	sort(rall(v));
  	for (auto i : v) {
  		if (ok(i)) {
  			cout << i << nl;
  			for (int j = 1; j <= n; ++j)
  				if (a[j] == i)
  					cout << j << ' ';
  			return 0;
  		}
  	}
  	return 0;
}