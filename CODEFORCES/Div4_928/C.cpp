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
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)

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

ll t, n, mx = -1, s[N], a[N], sum[N];

void sol() {
	sum[0] = 0;
	for (int i = 1; i <= mx; ++i)
		if (i <= 10) {
			a[i] = i%10 + i/10;
			sum[i] = sum[i-1] + a[i];
		} else {
			int k = (int)log10(i);
			a[i] = i/pow(10, k) + a[i % static_cast<int>(pow(10, k))];
			sum[i] = sum[i-1] + a[i];
		}
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	for (int i = 0; i < t; ++i) {
  		cin >> s[i];
  		mx = max(mx, s[i]);
  	}
  	clock_t z = clock();
  	sol();
  	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
  	for (int i = 0; i < t; ++i)
  		cout << sum[s[i]] << nl;
  	return 0;
}