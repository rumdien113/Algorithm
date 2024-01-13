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
string s;

void sol() {
	cin >> n >> s;
	if (
		s.substr(0, 4) == "2020" ||
		s.substr(n-4, 4) == "2020" ||
		(s.substr(0, 3) == "202" && s.substr(n-1, 1) == "0") ||
		(s.substr(0, 1) == "2" && s.substr(n-3, 3) == "020") ||
		(s.substr(0, 2) == "20" && s.substr(n-2, 2) == "20")
	)
		cout << "YES" << nl;
	else
		cout << "NO" << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--)
  		sol();
  	return 0;
}