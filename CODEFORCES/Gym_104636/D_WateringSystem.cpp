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

int n, cnt = 0;
double s[N], a, b, sum = 0;

int main() {
	fast;
  	indef();
  	cin >> n >> a >> b;
  	for (int i = 0; i < n; i++) { cin >> s[i]; sum += s[i]; }
  	sort(s + 1, s + n);
  	int ok = (s[0] * a) / sum;
  	int i = n-1;
  	while (ok < b) {
  		sum -= s[i];
  		s[i] = 0;
  		i--;
  		cnt++;
  		ok = (s[0] * a) / sum;
  	}
  	cout << cnt;
	return 0;
}