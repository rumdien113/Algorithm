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

int t, n;

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--) {
	  	vector<int> arr(N);
	  	cin >> n;
	  	for (int i = 0; i < n; i++) cin >> arr[i];
	    int total = 0;
	    for (int mask = 1; mask < (1 << n); ++mask) {
	        vector<int> subset;
	        for (int i = 0; i < n; ++i) {
	            if (mask & (1 << i)) {
	                subset.push_back(arr[i]);
	            }
	        }
	        int si = subset.size();
	        if (!subset.empty()) {
	            int gcd = subset[0];
	            for (int i = 1; i < si; ++i) {
	                gcd = __gcd(gcd, subset[i]);
	            }
	            total += gcd % M;
	        }
	    }
	    cout << total << nl;
  	}
	return 0;
}