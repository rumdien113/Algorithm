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
ll n, k, ans, a[N];
int main() {
	fast;
  	indef();
  	cin >> n >> k >> ans;
  	for (int i = 0; i < n-1; i++) cin >> a[i];
  	sort(a, a+n-1, greater<ll>());
  	for (int i = 0; i < n-1; i++) {
  		if(k > 0){
  			ans += a[i];
  			k--;
  		} else
  			ans -= a[i];
  	}
  	cout << ans;
	return 0;
}

