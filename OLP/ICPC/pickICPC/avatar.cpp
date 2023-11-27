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
const int N = 1e6+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

ll n, m, cnt = 0, a[N], b[N];

int main() {
	fast;
  	indef();
  	cin >> n >> m;
  	for (int i = 0; i < n; i++)
  		cin >> a[i];
  	for (int i = 0; i < m; i++)
  		cin >> b[i];
  	sort(a, a + n);
  	sort(b, b + m);
  	int i = 0, j = 0;
  	while(i < n && j < m) {
  		if (b[j] >= a[i]) {
  			i++; j++; cnt++;
  		} else
  			j++;
  	}
  	cout << cnt;
	return 0;
}