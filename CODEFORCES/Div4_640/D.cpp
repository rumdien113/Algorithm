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

int t, n, a[N];

void sol() {
	cin >> n;
	int cnt = 0, ali = 0, bob = 0, tali = 0, tbob = 0, l = 0, r = n-1;
	for (int i = 0; i < n; i++) cin >> a[i];
	while (l <= r) {
		if ((cnt & 1) == 0) {
			tali = 0;
			while(tali <= tbob && l <= r) {
				ali += a[l];
				tali += a[l];
				l++;
			}
		} else {
			tbob = 0;
			while (tbob <= tali && l <= r) {
				bob += a[r];
				tbob += a[r];
				r--;
			}
		}
		cnt++;
	}
	cout << cnt << ' ' << ali << ' ' << bob << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while (t--)
  		sol();
	return 0;
}