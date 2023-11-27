#include<bits/stdc++.h>
#include <numeric> 
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

void sol() {
	ll a, b, n;
	cin >> a >> b >> n;
	ll lcm = (a*b) / __gcd(a,b);
	ll l = lm, r = 1e18;
	while(l<r){
		ll m = (l + r)/2;
		if(m/a + m/b - m/lcm < n) l = m + 1;
		else r = m;
	}
	cout << l << nl;
}


int main() {
	fast;
  	indef();
  	cin >> t;
  	while (t--)
  		sol();
	return 0;
}