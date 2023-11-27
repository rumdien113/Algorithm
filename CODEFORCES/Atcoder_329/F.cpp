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

int n, q;
vector<set<int>> se(N);

int main() {
	fast;
  	indef();
  	cin >> n >> q;
  	for (int i = 0; i < n; ++i) {
  		int x; cin >> x;
  		se[i] = set<int>{x};
  	}
  	for (int i = 0; i < q; ++i) {
  		int a, b; cin >> a >> b;
 		--a; --b;
 		if (se[a].size() < se[b].size())
 			for (int x : se[a])
 				se[b].insert(x);
 		else {
 			for (int x : se[b])
 				se[a].insert(x);
 			se[a].swap(se[b]);
 		}
  		se[a].clear();
  		cout << se[b].size() << nl;
  	}
  	return 0;
}