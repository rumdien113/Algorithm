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

int n, x;
vector<ii> a;

int main() {
	fast;
  	indef();
  	cin >> n >> x;
  	for (int i = 1; i <= n; ++i) {
  		int k; cin >> k;
  		a.pb({k, i});
  	} 
  	sort(all(a));
  	for (int i = 0; i < n; i++) {
		int l = 0, r = n-1;
		while (l != r) {
			int tmp = x - a[i].st;
			if (l != i && r != i && a[l].st + a[r].st == tmp) {
				cout << a[i].nd << ' ' << a[l].nd << ' ' << a[r].nd;
				return 0;
			}
			if (a[l].st + a[r].st < tmp) {
				l++;
			} else {
				r--;
			}
		}
	}
  	cout << "IMPOSSIBLE";
  	return 0;
}