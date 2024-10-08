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
	string s[15];
	int a[15][15];
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s[i];
		for (int j = 0; j < n; ++j)
			if (s[i][j] == '0')
				a[i][j] = 0;
			else a[i][j] = 1;
	}
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			if (a[i][j] == 1) {
				if (a[i][j+1] == 1 && a[i+1][j] == 1 && a[i+1][j+1] == 1) {
					cout << "SQUARE" << nl;
					return;
				}
				else {
					cout << "TRIANGLE" << nl;
					return;
				}
			}
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while (t--)
  		sol();
  	return 0;
}