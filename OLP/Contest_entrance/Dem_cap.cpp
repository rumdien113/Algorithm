#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define db long double
#define st first
#define nd second
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define nl '\n'
#define ii pair<int,int>
#define vi vector<int>

const int M = 1e9+7;
const int N = 1e5+5;
const ll  P = 1e10;
int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

ll n, cnt = 0;
ll h[N];
unordered_map<ll, ll> mp;

int main() {
	fast;
	indef();
	clock_t z = clock();

	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		mp[a[i]]++;
	}

	unordered_set<ll> twos;
	for (ll i = 1; i <= (1LL << 31); i *= 2)
		twos.insert(i);
	// h[0] = 2;
	// for (int i = 1; i < 31; ++i) h[i] = h[i-1] * 2;

	for (int i = 0; i < n; ++i) {
		mp[a[i]]--;
		for (const ll &t : twos) {
			ll k = t - a[i];
			if (mp.find(k) != mp.end() && mp[k] > 0)
                cnt += mp[k];
		}
		// for (int j = 0; j < 31; ++j) {
		// 	ll k = h[j] - a[i];
		// 	if (mp.find(k) != mp.end() && mp[k] > 0)
        //         cnt += mp[k];
		// }
	}
	cout << cnt;
	
	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}