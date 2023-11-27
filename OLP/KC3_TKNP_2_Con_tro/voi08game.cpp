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

ll n, ans = 1e12, a[N], b[N];

int main() {
	fast;
  	indef();

  	cin >> n;
  	for (int i = 0; i < n; i++)
  		cin >> a[i];
  	sort(a, a+n);
  	for (int i = 0; i < n; i++) {
  		cin >> b[i];
  		int index = lower_bound(a, a+n, -b[i]) - a;
  		if (index == 0) index = 1;
  		if (index >= n)
  			index = n-1;
  		// cout << "index: " << index << " - ";
  		ans = min(ans, min(abs(b[i] + a[index]), abs(b[i] + a[index-1])));
  		// cout << "ans: " << ans << nl;
  	}
  	cout << ans;
	return 0;
}

