#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define db long double
#define st first
#define nd second
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
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

ll t, n, a[35], cnt[35];

void pow2() {
	a[0] = 1;
	cnt[0] = 0;
	for (int i = 1; i <= 30; ++i) {
		a[i] = a[i-1]*2;
		cnt[i] = cnt[i-1] + a[i];
	}
}

void sol() {
	cin >> n;
	ll s1 = a[n] + cnt[n/2-1];
	ll s2 = cnt[n-1] - cnt[n/2-1];
	cout << abs(s1 - s2) << nl;
}

int main() {
	fast;
	indef();
	clock_t z = clock();

	pow2();
	cin >> t;
	while (t--)
		sol();

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}