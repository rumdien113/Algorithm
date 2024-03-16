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
 
string s, ans, k1 = "", k2 = "", w = "";
map<char, int> mp;
 
bool isPalin(string res) {
	ll n = res.size();
	for (int i = 0; i < n/2+1; ++i)
		if (res[i] != res[n-i-1])
			return false;
	return true;
}

int main() {
	fast;
  	indef();
  	cin >> s;
  	for (auto i : s)
  		mp[i]++;
  	for (auto i : mp) {
  		if (i.nd % 2 == 1) {
  			w += i.st;
  			mp[i.st]--;
  		}
  	}
  	for (auto x : mp) {
  		for (int i = 0; i < x.nd/2; ++i) {
  			k1 += x.st;
  			mp[x.st]--;
  		}
  	}
  	// for (auto x : mp) {
  	// 	for (int i = 0; i < x.nd; ++i) {
  	// 		k2 = x.st + k2;
  	// 		mp[x.st]--;
  	// 	}
  	// }
  	k2 = k1;
  	reverse(all(k2));
  	string ans = k1 + w + k2;
  	if (isPalin(ans))
  		cout << ans;
  	else cout << "NO SOLUTION";
  	return 0;
}