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

int t, n, k;
string s;

void sol(string& s, int& k) {
	map<char, int> mp;
	for (char c : s)
		mp[c]++;
	int cnt = 0;
	for (auto it : mp)
		if (it.nd % 2 != 0)
			cnt++;
	if (cnt - k == 1 || cnt - k == 0 || cnt == 0 || cnt < k)
		cout << "Yes" << nl;
	else cout << "No" << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--) {
  		cin >> n >> k >> s;
  		if (n == 1) cout << "Yes" << nl;
  		else sol(s, k);
  	}
	return 0;
}