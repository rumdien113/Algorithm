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

int t, n;

void sol() {
	int cnt = 0, sum = 0, a[N];
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		sum += a[i];
	}
	// cout << "sum = " << sum << " => ";
	if (sum % 3 == 0) {
		cout << 0 << nl;
		return;
	} else if (sum % 3 == 2) {
		cout << 1 << nl;
		return;
	} else if (sum % 3 == 1) {
		for (int i = 0; i < n; ++i) {
			if ((sum - a[i]) % 3 == 0) {
				cout << 1 << nl;
				return;
			}
		}
	}
	cout << 2 << nl;
}
 
int main() {
	fast;
	indef();
	clock_t z = clock();

	cin >> t;
	while (t--)
		sol();
	// cout << 14%3;	

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}