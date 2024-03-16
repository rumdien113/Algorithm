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
#define vi vector<long long>

const int M = 1e6+1;
const int N = 2e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

ll n, a[N], sum = 0;
map<int, int> cnt;
vi ans;

int main() {
	fast;
  	indef();
  	cin >> n;
  	for (int i = 0; i < n; ++i) {
  		cin >> a[i];
  		sum += a[i];
  		cnt[a[i]]++;
  	}
  	for (int i = 0; i < n; ++i) {
  		ll t = sum - a[i];
  		cnt[a[i]]--;
  		if (cnt[t/2] > 0 && t % 2 == 0 && t/2 < M)
  			ans.pb(i);
  		cnt[a[i]]++;
  	}
  	cout << ans.size() << nl;
  	for (auto i : ans)
  		cout << i+1 << ' ';
  	return 0;
}