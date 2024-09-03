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

ll n, k, sum = 0, a[N];
bool ok[N];

int main() {
	fast;
  	indef();
  	cin >> n >> k;
  	for (int i = 0; i < n; ++i) {
  		cin >> a[i];
  		sum += a[i];
  		ok[i] = 1;
  	}
  	sort(a, a + n, greater<int>());
  	for (int i = 0; i < n; ++i) {
  		if (ok[i]) {
	  		ll tmp = a[i];
	  		for (int j = i+1; j <n; ++j)
	  			if (ok[j] == 1 && a[j] <= tmp-k) {
	  				sum -= a[j];
	  				ok[j] = 0;
	  				tmp = a[j];
	  			}

  		}
  		else continue;
  	}
  	cout << sum;
  	return 0;
}