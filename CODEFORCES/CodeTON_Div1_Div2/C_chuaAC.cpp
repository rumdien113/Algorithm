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

int t;

void show(int B[], int k) {
	cout << "YES" << nl;
	for (int i = 0; i < k; ++i)
		cout << B[i] << ' ';
	cout << nl;
}

void sol() {
	int n, x, cnt = 0, a[N], b[N];
	vector<ii> q;
	cin >> n >> x;
	for (int i = 0; i < n; ++i) cin >> a[i];
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
		if (a[i] > b[i])
			cnt++;
		else
			q.pb({b[i], i+1});
	}
	sort(all(q));
	if (cnt == x) {
		show(b, n);
		return;
	} else if (cnt > x) {
		for (int i = 0; i < n; ++i) {
			if (a[i] > b[i]) {
				auto it = upper_bound(all(q), a[i], [](int val, const pair<int, int>& e) {
			        return val < e.st;
			    });
			    if (it != q.end() && it->st >= a[i]) {
			    	swap(b[i], b[it->nd]);
			    	cnt--;
			    }
			}
			if (cnt == x) {
				show(b, n);
				return;
			}
		}		
	} else if (cnt < x) {
		for (int i = 0; i < n; ++i) {
			if (a[i] < b[i]) {
				auto it = upper_bound(all(q), a[i], [](int val, const pair<int, int>& e) {
                    return val > e.st;
            });
			    if (it != q.end()) {
			    	swap(b[i], b[it->nd]);
			    	cnt++;
			    }
			}
			if (cnt == x) {
				show(b, n);
				return;
			}
		}
	}		
	cout << "NO" << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--) {
  		sol();
  		cout << "=========================" << nl;
  	}
  	return 0;
}