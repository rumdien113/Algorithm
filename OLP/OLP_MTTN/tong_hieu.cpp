#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define db long double
#define st first
#define nd second
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
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

string s, d;

void swap(string& s, string& d) {
	string k = s;
	s = d;
	d = k;
}

string add(string a, string b) {
	int n1 = a.size(), n2 = b.size();
	string ans = "";
	reverse(all(a));
	reverse(all(b));
	for (int i = n2; i < n1; ++i)
		b += '0';
	int nho = 0;
	for (int i = 0; i < n1; ++i) {
		int tmp = (a[i]-'0') + (b[i]-'0') + nho;
		nho = tmp / 10;
		ans += char(tmp % 10 + '0');
	}
	if (nho > 0)
		ans += char(nho);
	reverse(all(ans));
	return ans;
}

void sub() {
	int n1 = a.size(), n2 = b.size();
	string ans = "";
	reverse(all(a));
	reverse(all(b));
	for (int i = n2; i < n1; ++i)
		b += '0';
	for (int i = 0; i < n1; ++i) {
		if (a[i]-'0' < b[i]-'0') {
			ans += char(10*(a[i]-'0') - (b[i]-'0'));
			b[i+1]++;
		} else
			ans += char((a[i]-'0') - (b[i]-'0'));
	}
	if (nho > 0)
		ans += char(nho);
	reverse(all(ans));
	return ans;
}

int main() {
	fast;
	indef();
	clock_t z = clock();

	cin >> s >> d;
	if (s.size() < d.size())
		swap(s, d);
	cout << add(s, d);

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}