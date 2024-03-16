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
const int N = 1e6+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int n, ok[N] = {0};
vi a1, a2;
bool check = false;

void add(vi& a, int x, int y, bool& check) {
	a.pb(x);
	a.pb(y);
	ok[x] = 1;
	ok[y] = 1;
	check = !check;
}

void show(vi& a1, vi& a2) {
	cout << a1.size() << nl;
	for (int i : a1)
		cout << i << ' ';
	cout << nl << a2.size() << nl;
	for (int i : a2)
		cout << i << ' ';
}

void div(int n) {
	if ((n/2) & 1) {
		cout << "NO";
		exit(0);
	}
	cout << "YES" << nl;
	for (int i = 1; i <= n/2; ++i) {
		if (ok[i] == 0) {
			if (check)
				add(a2, i, n-i+1, check);
			else
				add(a1, i, n-i+1, check);
		}
	}
	show(a1, a2);
}

void noDiv(int n) {
	if (((n-1)/2) % 2 == 0) {
		cout << "NO";
		exit(0);
	}
	cout << "YES" << nl;
	n -= 1;
	for (int i = 1; i <= n/2; ++i)
		if (ok[i] == 0) {
			if (check)
				add(a2, i, n-i+1, check);
			else
				add(a1, i, n-i+1, check);
		}
	a2.pb(n+1);
	show(a1, a2);
}

int main() {
	fast;
  	indef();
  	cin >> n;
  	if (n & 1) noDiv(n);
  	else div(n);
  	return 0;
}