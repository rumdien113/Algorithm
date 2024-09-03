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

int n, m, l, r, q, x, a[N];

bool comp(int a, int b)
{
    return a > b;	
}

int main() {
	fast;
  	indef();
  	cin >> n >> m;
  	// for (int i = 1; i <= m; ++i) {
  	// 	cin >> l >> r;
  	// 	for (int j = l; j <= r; ++j)
  	// 		a[j]++;
  	// }

  	for (int i = 1; i <= m; ++i) {
        int l, r;
        cin >> l >> r;
        a[l]++;
        if (r < n) {
            a[r + 1]--;
        }
    }

    for (int i = 2; i <= n; ++i)
        a[i] += a[i - 1];

  	cin >> q;
  	sort(a+1, a+n+1, greater<int>());
  	// for (int i = 1; i <= n; ++i)
  	// 	cout << a[i] << ' ';
  	// cout << nl;
  	for (int i = 0; i < q; ++i) {
  		cin >> x;
  		int index = lower_bound(a+1, a+n+1, x-1, comp) - a;
  		cout << index-1 << nl;
  	}
  	return 0;
}