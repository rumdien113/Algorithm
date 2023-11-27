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

const int M = 1e7+7;
const int N = 2e5+5;

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
	bool ok1 = false, ok2 = false, ok3 = false;
	int n, t, ti1 = M, ti2 = M, ti3 = M;
	string s;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> t >> s;
		if (s == "10") {
			ti1 = min(ti1, t);
			ok1 = true;
		}
		else if (s == "01") {
			ti2 = min(ti2, t);
			ok2 = true;
		}
		else if (s == "11") {
			ti3 = min(ti3, t);
			ok3 = true;
		}
	}
	if (ok3)
		cout << min((ti1 + ti2), ti3) << nl;
	else if (ok1 && ok2)
		cout << ti1 + ti2 << nl;
	else cout << -1 << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--) 
  		sol();
  	return 0;
}