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

int n, i = 1, cnt = 1, ans = 0;
map<char, int> a;
string s;

int main() {
	fast;
  	indef();
  	cin >> n >> s;
  	while (i <= n) {
  		if (s[i] == s[i-1]) cnt++;
  		else {
  			a[s[i-1]] = max(a[s[i-1]], cnt);
  			cnt = 1;
  		}
  		i++;
  	}
  	// for (auto i : a)
  	// 	cout << i.st << ' ' << i.nd << nl;
  	for (auto i : a)
  		ans += i.nd;
  	cout << ans;
  	return 0;
}