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

int n;
string ans = "";
vector<string> a(N);

bool comp(string s1, string s2) {
	int l1 = s1.length(), l2 = s2.length();
	if (l1 != l2) return l1 > l2;
	else return s1 > s2;
}

int main() {
	fast;
  	indef();
  	cin >> n;
  	for (int i = 0; i < n; ++i) cin >> a[i];
  	sort(all(a), comp);
  	for (int i = 0; i < n-1; ++i)
  		for (int j = i + 1; j < n; ++j) {
  			string tmp;
  			int li = a[i].length();
  			int lj = a[j].length();
			tmp = a[i].substr(li - lj, li);
			if (a[j].compare(tmp) == 0 && tmp.length() > ans.length())
				ans = tmp;
  			else if (ans.length() == tmp.length() && tmp.compare(ans) < 0)
				ans = tmp;
  		}
  	cout << ans;
  	return 0;
}