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
string s;

void sol() {
	cin >> s;
	int ze = count(all(s), '0');
	if (ze == 0) {
		cout << 0 << nl;
		return;
	}
	int fi = s.find('0');
	int la = s.rfind('0');
	if (la - fi + 1 == ze)
		cout << 1 << nl;
	else 
		cout << 2 << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--)
  		sol();
  	return 0;
}