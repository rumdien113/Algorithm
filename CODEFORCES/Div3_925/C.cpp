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
const int N = 2e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

ll t, n, a[N];

void sol() {
	int po, fi = 1, la = 1;
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	for (int i = 1; i < n; ++i)
		if (a[i] == a[i-1]) fi++;
		else break;
	for (int i = n-2; i >= 0; i--)
		if (a[i] == a[i+1]) la++;
		else break;
	if (fi == la && fi == n) {
		cout << 0 << nl;
		return;
	}
	// cout << fi << ' ' << la << " => ";
	if (a[0] == a[n-1]) {
		cout << n - fi - la << nl;
	} else {
		if (fi >= la)
			cout << n - fi << nl;
		else
			cout << n - la << nl;
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