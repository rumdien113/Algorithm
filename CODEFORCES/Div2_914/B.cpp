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
//éo hiểu
void sol() {
	int n;
	cin >> n;
	ii a[n+1];
	for (int i = 1; i <= n; ++i)
		cin >> a[i].st, a[i].nd = i;
	sort(a+1, a+n+1);
	int nxt[n+1], ans[n+1];
	ll sum[n+1];
	nxt[0] = sum[0] = 0;
	for (int i = 1; i <= n; ++i) {
		if (nxt[i-1] >= i) {
			nxt[i] = nxt[i-1];
			sum[i] = sum[i-1];
		} else {
			sum[i] = sum[i-1] + a[i].st;
			nxt[i] = i;
			while(nxt[i] + 1 <= n && sum[i] >= a[nxt[i]+1].st) {
				nxt[i]++;
				sum[i] += a[nxt[i]].st;
			}
		}
		ans[a[i].nd] = nxt[i];
	}
	for (int i = 1; i <= n; ++i)
		cout << ans[i] - 1 << ' ';
	cout << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--)
  		sol();
  	return 0;
}