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

// n khối cột
// m số khối ban đầu trong túi
// k >= |h[i] - h[i+1]|

int t, n, m, k;

void sol() {
	cin >> n >> m >> k;
	vector<int> h(n);
	for(int&v : h) cin >> v;
	for(int i = 0; i < n - 1; i++) {
		if (h[i] >= h[i+1]) {
			if(k >= h[i + 1]) m += h[i];
			else m += h[i]  - h[i + 1] + k;
		} else {
			if(k >= h[i + 1]){
				m += h[i];
			}
			else {
				m -= h[i + 1] - h[i] - k;
				if(m < 0)
					return cout << "NO" << nl, void();
			}
		}
	}
	cout << "YES" << endl;
}

int main() {
	fast;
	indef();
	clock_t z = clock();

	cin >> t;
	while (t--)
		sol();

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}