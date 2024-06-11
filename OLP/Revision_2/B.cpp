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

int n;
bool a[205];

int main() {
	fast;
	indef();
	clock_t z = clock();

	cin >> n;
	a[0] = a[1] = 0;
	for (int i = 2; i * i <= 200; ++i)
		if (a[i])
			for (int j = i*i; j <= 200; j += i)
				a[j] = 0;
	if (a[n] || n == 1) {
		cout << 1 << ' ' << n;
		exit(0);
	}
	for (int i = n-1; i >= 1; --i) {
		if (n % i == 0) {
			cout << i << ' ' << n/i;
			exit(0);
		}
	}

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}