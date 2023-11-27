#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define db long double
#define X first
#define Y second
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

int n, m, ans = 0, a[N];

int main() {
	fast;
  	indef();
  	cin >> n >> m;
  	if (m == 1) {
  		cout << 0;
  		exit(0);
  	}
  	for (int i = 0; i < n; i++)
  		cin >> a[i];
  	sort(a, a+n, greater<int>());
  	int i = 0;
  	while (m > 0 && i < n) {
  		m -= a[i];
  		ans++;
  		if (m > 0) m++;
  		i++;
  	}
  	if (m > 0) cout << -1;
  	else cout << ans;
	return 0;
}

