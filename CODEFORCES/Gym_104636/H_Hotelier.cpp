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

int n, a[N];
string s;

int main() {
	fast;
  	indef();
  	cin >> n >> s;
  	for (int x = 0; x < n; x++) {
  		if (s[x] == 'L') {
  			for (int i = 0; i < 10; i++)
  				if (a[i] == 0) {
  					a[i] = 1;
  					break;
  				}
  		}
  		else if (s[x] == 'R') {
  			for (int i = 9; i >= 0; i--)
  				if (a[i] == 0) {
  					a[i] = 1;
  					break;
  				}
  		}
  		else {
  			int index = (int)s[x] - '0';
  			a[index] = 0;
  		}
  	}
  	for (int i = 0; i < 10; i++)
  		cout << a[i];
  	
	return 0;
}