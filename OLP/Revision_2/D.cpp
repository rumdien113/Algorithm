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
const int N = 1e7+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

ll n, x, ans = M, a[N], cnt[N];

int main() {
	fast;
	indef();
	clock_t z = clock();

	cin >> n >> x;
	cnt[0] = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		cnt[i] = cnt[i-1] + a[i];
	} 
	if (cnt[n] < x) {
		cout << -1;
		exit(0);
	}
	ll l = 0;
	for (int r = 1; r <= n; ++r) {
		if (cnt[r] - cnt[l] >= x) {
			while(l < r) {
				if (cnt[r] - cnt[l+1] >= x) l++;
				else break;
			}
			if (r == l+1) {
				cout << 1;
				exit(0);
			}
			ans = min(ans, r-l);
		}
	}
	cout << ans;

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}