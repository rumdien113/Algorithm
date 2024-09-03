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

int t, n, m;

void sol() {
	cin >> n >> m;
	vector<vector<char>> a(n, vector<char>(m));
	vector<int> row(n, 0);
    vector<int> col(m, 0);
	int v, h, tmp;
	for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            if (a[i][j] == '#') {
                row[i]++;
                col[j]++;
            }
        }
    }
	int maxRow = 0;
    int maxRowCount = row[0];
    for (int i = 1; i < n; ++i) {
        if (row[i] > maxRowCount) {
            maxRowCount = row[i];
            maxRow = i;
        }
    }
	int maxCol = 0;
    int maxColCount = col[0];
    for (int j = 1; j < m; ++j) {
        if (col[j] > maxColCount) {
            maxColCount = col[j];
            maxCol = j;
        }
    }
	cout << maxRow+1 << ' ' << maxCol+1 << endl;
}

int main() {
	fast;
	indef();
	clock_t z = clock();

	cin >> t;
	while(t--)
		sol();

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}