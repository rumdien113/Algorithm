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

int main() {
	fast;
  	indef();
  	cin >> t;
  	while (t--) {
  		int sum = 0, x1, x2, a[11][11];
  		for (int i = 1; i <= 10; i++)
  			for (int j = 1; j <= 10; j++) {
  				char x; cin >> x;
  				x1 = i; x2 = j;
  				if (x == 'X') {
  					if (i > 5) x1 = 11 - i;
  					if (j > 5) x2 = 11 - j;
  					sum += min(x1, x2);
  				}
  			}
  		cout << sum << nl;
  	}
	return 0;
}