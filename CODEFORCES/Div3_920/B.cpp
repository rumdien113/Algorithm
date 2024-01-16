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
string s1, s2;

void sol() {
	int ans = 0, add = 0, de = 0, dif = 0;
	cin >> n >> s1 >> s2;
	int k1 = count(all(s1), '0');
	int k2 = count(all(s2), '0');
	for (int i = 0; i < n; ++i) {
		if (s1[i] != s2[i])
			dif++;
		if (s1[i] == '1' && s2[i] == '0')
			de++;
		if (s1[i] == '0' && s2[i] == '1')
			add++;
	}	
	cout << dif - (dif - max(de, add)) << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--)
  		sol();
  	return 0;
}