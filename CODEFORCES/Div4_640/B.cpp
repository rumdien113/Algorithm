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

int t, n, k;

void sol() {
	vi ans;
	int tmp = 0;
	cin >> n >> k;
	if ((n & 1) == 0) {
		for (int i = 0; i < k-1; i++) {
			ans.pb(2);
			tmp += 2;
		}
		ans.pb(n-tmp);	
		if ((n - tmp) > 0 && ((n - tmp) & 1) == 0) {
			cout << "YES" << nl;
			for (auto it : ans)
				cout << it << ' ';
			cout << nl;
			return;
		}
	} 
	tmp = 0;
	ans.clear();
	for (int i = 0; i < k-1; i++) {
		ans.pb(1);
		tmp += 1;
	}
	ans.pb(n-tmp);
	if ((n - tmp) & 1 != 0 && (n - tmp > 0)) {
		cout << "YES" << nl;
		for (auto it : ans)
			cout << it << ' ';
		cout << nl;
		return;
	}
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