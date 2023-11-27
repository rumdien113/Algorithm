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

int t;
string s;

void sol(string& n) {
	int cnt = 0, a[5];
	for (int i = 0; i < 4; i++)
		if (s[i] == '0')
			a[i] = 10;
		else a[i] = s[i] - '0';
	if (a[0] != 1) cnt += abs(a[0] - 1);
	for (int i = 0; i < 3; i++)
		cnt += abs(a[i] - a[i+1]);
	cnt += 4;
	cout << cnt << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--) {
  		cin >> s;
  		sol(s);
  	}
	return 0;
}