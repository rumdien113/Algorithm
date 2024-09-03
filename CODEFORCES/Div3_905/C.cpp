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
	cin >> n >> k;
	bool th = 0;
	int cnt = 0;
	int x, mi = M, fo = 0, a[N];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++) {
		if (a[i] == 3) th = 1;
		if (a[i] % 2 == 0) cnt++;
		mi = min(mi, k - a[i]%k);
		if(a[i] % k == 0) return cout << "0\n",void();
	}
	int ans = mi;
	if(k == 4){
		ans = min(ans,max(0, 2 - cnt));
		if(th) ans = min(ans, 1);
	}
	cout << ans << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--)
  		sol();
	return 0;
}