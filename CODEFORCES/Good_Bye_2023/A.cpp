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

int t, n, k;
int ok[10] = {289, 119, 17, 7, 1};

void sol() {
	ll b, check = 1;
	cin >> n >> k;
	k--;
	for (int i = 0; i < n; ++i) {
		cin >> b;
		check *= b;
	}
	if (2023 % check != 0 || check == 0)
		cout << "NO" << nl;
	else {
		cout << "YES" << nl << 2023/check;
		while(k--)
			cout << ' ' << 1;
		cout << nl;
	}
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--)
  		sol();
  	return 0;
}