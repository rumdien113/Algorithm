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

const int M = 1e6+7;
const int N = 1e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int t;

void sol() {
	char a[5][5];
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			cin >> a[i][j];
	for (int i = 0; i < 3; ++i) {
		if (a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0] != '.') {
			cout << a[i][0] << nl;
			return;
		}
	}
	for (int i = 0; i < 3; ++i) {
		if (a[0][i] == a[1][i] && a[1][i] == a[2][i] && a[0][i] != '.') {
			cout << a[0][i] << nl;
			return;
		}
	}
	if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[1][1] != '.') {
		cout << a[0][0] << nl;
		return;
	}
	if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[1][1] != '.') {
		cout << a[1][1] << nl;
		return;
	}
	cout << "DRAW" << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while (t--)
  		sol();
  	return 0;
}