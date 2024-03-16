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

void show(ll a, ll b, ll c) {
	ll sum = a + b + c;
	cout << sum;
	exit(0);
}

int n, x = 1, cnt = 1;
ll ka = 10, kb = 10, kc = 10, a = 1, b = 1, c = 1;

int main() {
	fast;
	indef();
	clock_t z = clock();

	cin >> n;
	if (n == 1) {
		cout << 3;
		exit(0);
	}
	while(cnt < n) {
		a += ka;
		cnt++;
		if (cnt == n)	show(a, b, c);
		while(b < a && cnt < n) {
			b += kb;
			cnt++;
			if (cnt == n)	show(a, b, c);
			while(c < b && cnt < n) {
				c += kc;
				cnt++;
				kc *= 10;
				if (cnt == n)	show(a, b, c);
			}
			kc = 10; c = 1;
			kb *= 10;
		}
		kb = 10; b = 1;
		ka *= 10;
	}

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}