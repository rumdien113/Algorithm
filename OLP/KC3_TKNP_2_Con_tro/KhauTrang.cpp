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

int n, k, q;
vector<ll> a;

int main() {
	fast;
  	indef();
  	cin >> n;
  	for (int i = 0; i < n; i++) {
  		ll x; cin >> x;
  		a.pb(x);
  	}
  	sort(a.begin(), a.end());
  	cin >> q;
  	for (int i = 0; i < q; i++) {
	    ll x; cin >> x;

	    int index = lower_bound(a.begin(), a.end(), x) - a.begin();

	    cout << index << endl;
  	}
	return 0;
}
