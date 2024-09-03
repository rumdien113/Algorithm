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
string s;

void sol() {
	cin >> s;
	int n = s.size();
	vector<bool> ok(n, true);
	vi le;
	vi ca;
	for (int i = 0; i < n; ++i) {
		if (s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B')
			ca.pb(i);
		else if (s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b')
			le.pb(i);
		if (s[i] == 'b' && !le.empty()) {
			ok[i] = 0;
			ok[le.back()] = 0;
			le.pop_back();
		} else if (s[i] == 'B' && !ca.empty()) {
			ok[i] = 0;
			ok[ca.back()] = 0;
			ca.pop_back();
		} 
		// cout << s[i] << nl << "le: ";
		// for (auto x : le)
		// 	cout << x << ' ';
		// cout << nl;
		// cout << "ca: ";
		// for (auto x : ca)
		// 	cout << x << ' ';
		// cout << nl;
	}
	for (int i = 0; i < n; ++i)
        if (ok[i] && s[i] != 'b' && s[i] != 'B')
            cout << s[i];
	cout << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--)
  		sol();
  	return 0;
}