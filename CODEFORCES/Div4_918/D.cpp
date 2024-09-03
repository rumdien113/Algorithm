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
string s;

// a, e
// b, c, d

bool vo(char a) {
	if (a == 'a' || a == 'e')
		return 1;
	return 0;
}

bool co(char a) {
	if (a == 'b' || a == 'c' || a == 'd')
		return 1;
	return 0;
}

void sol() {
	vector<char> v;
	cin >> n >> s;
	bool state = false;
	for (int i = n-1; i >= 0; i--) {
		v.pb(s[i]);
		if (state) {
			v.pb('.');
			state = false;
		}
		if (vo(s[i])) 
			state = true;
	}
	reverse(all(v));
	v.erase(v.begin());
	for (auto i : v)
		cout << i;
	cout << nl;
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