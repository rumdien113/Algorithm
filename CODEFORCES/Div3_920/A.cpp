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

int t;

void sol()  {
	vector<ii> a;
	for (int i = 0; i < 4; ++i) {
		int x, y;
		cin >> x >> y;
		a.pb(make_pair(x, y));
	}
	sort(a.begin(), a.end());
	int ans = a[0].nd - a[1].nd;
	cout << ans * ans << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while (t--)
  		sol();
  	return 0;
}