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

ll a, b, ans, k = 0;
set<ii> se;

ll sum(ll x) {
	ll ans = 0, k = 10;
	while(x > 0) {
		ans += x % k;
		x /= k;
	}
	return ans;
}

int main() {
	fast;
  	indef();
  	cin >> a >> b;
  	ll mi = min(a, b);
  	for (int i = 1; i <= sqrt(mi); ++i) {
  		if (a % i == 0 && b % i == 0) {
  			se.insert({i, sum(i)});
  		}
		if (mi % i == 0 && a % (mi/i) == 0 && b % (mi/i) == 0)
			se.insert({mi/i, sum(mi/i)});
	}
  	for (auto i : se)
  		if (i.nd > k) {
  			ans = i.st;
  			k = i.nd;
  		}
  	cout << k;
  	return 0;
}