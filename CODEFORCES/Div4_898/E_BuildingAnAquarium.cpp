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
const int N = 2e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

ll t, n, x, a[N];

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--) {
  		int h = 0;
  		cin >> n >> x;
  		for (int i = 0; i < n; i++) cin >> a[i];
  		ll left = 1, right = 1e10;
  		while (left < right-1) {
  			ll sum = 0, mid = left+(right-left)/2;
  			for (int i = 0; i < n; i++)
  				if (a[i] < mid)
  					sum += mid-a[i];
  			if (sum > x)
  				right = mid;
  			else left = mid;
  		}
  		cout << left << nl;
  	}
	return 0;
}