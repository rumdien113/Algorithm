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
//[A, C, G, T]
int n, cnt[5];
string s;

int main() {
	fast;
  	indef();
  	cin >> n >> s;
  	if (n % 4 != 0) {
  		cout << "===";
  		exit(0);
  	}
  	for (int i = 0; i < n; i++) {
  		if (s[i] == 'A') cnt[0]++;
  		else if (s[i] == 'C') cnt[1]++;
  		else if (s[i] == 'G') cnt[2]++;
  		else if (s[i] == 'T') cnt[3]++;
  	}
  	int mx = n/4;
  	for (int i = 0; i < n; i++) {
  		if (s[i] == '?') {
  			if (cnt[0] < mx) {
  				s[i] = 'A';
  				cnt[0]++;
  			} else if (cnt[1] < mx) {
  				s[i] = 'C';
  				cnt[1]++;
  			} else if (cnt[2] < mx) {
  				s[i] = 'G';
  				cnt[2]++;
  			} else if (cnt[3] < mx) {
  				s[i] = 'T';
  				cnt[3]++;
  			}
  		}
  	}

  	if (cnt[0] != cnt[1] || cnt[1] != cnt[2] || cnt[2] != cnt[3]) {
  		cout << "===";
  		exit(0);
  	}
  	cout << s;
	return 0;
}