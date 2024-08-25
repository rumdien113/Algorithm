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

int h, w, n, ans = 0;
string s;
char a[1000][1000];
pair<int, int> tmp;
 
int main() {
	fast;
	indef();
	clock_t z = clock();

	cin >> h >> w >> n >> s;
	for (int i = 0; i < h; ++i)
		for (int j = 0; j < w; ++j)
			cin >> a[i][j];
	for (int i = 1; i < h; ++i)
		for (int j = 1; j < w; ++j)
			if (a[i][j] == '.') {
				tmp = {i, j};
				bool ok = true;
				for (char q : s) {
					if (q == 'L') {
						if (a[tmp.st][tmp.nd-1] == '.') {
							tmp = {tmp.st, tmp.nd-1};
							// cout << tmp.st << " - " << tmp.nd << nl;
						}
						else {
							ok = false;
							// cout << "FAILED";
							break;
						}
					} else if (q == 'R') {
						if (a[tmp.st][tmp.nd+1] == '.') {
							tmp = {tmp.st, tmp.nd+1};
							// cout << tmp.st << " - " << tmp.nd << nl;
						}
						else {
							ok = false;
							// cout << "FAILED";
							break;
						}
					} else if (q == 'U') {
						if (a[tmp.st-1][tmp.nd] == '.') {
							tmp = {tmp.st-1, tmp.nd};
							// cout << tmp.st << " - " << tmp.nd << nl;
						}
						else {
							ok = false;
							// cout << "FAILED";
							break;
						}
					} else if (q == 'D') {
						if (a[tmp.st+1][tmp.nd] == '.') {
							tmp = {tmp.st+1, tmp.nd};
							// cout << tmp.st << " - " << tmp.nd << nl;
						}
						else {
							ok = false;
							// cout << "FAILED";
							break;
						}
					}
				}
				if (ok) ans++;
			}
	cout << ans;

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}