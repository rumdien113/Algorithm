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
const int N = 2e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int t;

void sol() {
	ll n, c, l = 1, r = 1e9, a[N];
	cin >> n >> c;
	//x1 = 4n || x2 = 4A || x3 = A^2-c
	for (int i = 0; i < n; ++i) cin >> a[i];
	while(l <= r) {
		ll x = 0;
		ll mid = l+ (r - l) / 2;
		for (int i = 0; i < n; i++) {
			x += (a[i] + 2*mid) * (a[i] + 2*mid);
			if (x > c) break;
		}
		if (x == c) {
			cout << mid << nl;
			return;
		} else if (x > c)
			r = mid - 1;
		else l = mid + 1;		
	}
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--)
  		sol();
  	return 0;
}