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

void sol() {
	int a, b, k1, k2, q1, q2, ans = 0;
	cin >> a >> b >> k1 >> k2 >> q1 >> q2;
	set<ii> k;
	k.insert({k1+a, k2+b});
	k.insert({k1+a, k2-b});
	k.insert({k1-a, k2+b});
	k.insert({k1-a, k2-b});
	k.insert({k1+b, k2+a});
	k.insert({k1+b, k2-a});
	k.insert({k1-b, k2+a});
	k.insert({k1-b, k2-a});

	set<ii> q;
	q.insert({q1+a, q2+b});
	q.insert({q1+a, q2-b});
	q.insert({q1-a, q2+b});
	q.insert({q1-a, q2-b});
	q.insert({q1+b, q2+a});
	q.insert({q1+b, q2-a});
	q.insert({q1-b, q2+a});
	q.insert({q1-b, q2-a});

	for (auto i : k) {
		for (auto j : q) {
			if (i.st == j.st && i.nd == j.nd) {
				ans++;
				break;
			}
		}
	}
	cout << ans << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--)
  		sol();
  	return 0;
}