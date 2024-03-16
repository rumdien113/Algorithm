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

void sol() {
	int ansa = 0, ansi = 0, ansp = 0;
	vi a; vi i; vi p;
	cin >> n >> s;
	for (int j = 0; j < n; ++j) {
		if (s[j] == 'a') a.pb(j);
		if (s[j] == 'i') i.pb(j);
		if (s[j] == 'p') p.pb(j);
	}
	for (int j : p)
		if (s[j-2] == 'm' && s[j-1] == 'a' && s[j+1] == 'i' && s[j+2] == 'e')
			ansp++;

	for (int j : a) {
		if (s[j-1] == 'm' && s[j+1] == 'p')
			ansa++;
	}

	for (int j : i)
		if (s[j-1] == 'p' && s[j+1] == 'e')
			ansi++;
	cout << ansa+ansi-ansp << nl;
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