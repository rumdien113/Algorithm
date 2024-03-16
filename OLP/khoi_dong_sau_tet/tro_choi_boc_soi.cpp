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
		freopen("EQUAL.INP","r",stdin);
		freopen("EQUAL.OUT","w",stdout);
	#endif
}

string a;
int n, sum1 = 0, sum2 = 0;

void sol() {
	sum2 = 0;
	int h, k = sum1;
	if (n & 1) {
		h = n/2+1;
		if (a[n/2] == '9') {
			a[n/2-1]++;
			a[n/2] = '0';
			k++; sum1++;
		} else
			a[n/2]++;
		for (int i = h; i < n; ++i)
			a[i] = '0';
		for (int i = n-1; i >= h; i--) {
			if (k >= 10) {
				a[i] = '9';
				sum2 += 9;
				k -= 9;
			} else {
				a[i] = k + '0';
				sum2 += k;
				break;
			}
		}
	}
	else {
		h = n/2;
		if (a[h] == '9') {
			a[h-1]++;
			a[h] = 0;
			k++; sum1++;
		} else
			a[h]++;
		k -= a[h]-'0';
		for (int i = h+1; i < n; ++i)
			a[i] = '0';
		for (int i = n-1; i >= h; i--) {
			if (k >= 10) {
				a[i] = '9';
				sum2 += 9;
				k -= 9;
			} else {
				a[i] = k + '0';
				sum2 += k;
				break;
			}
		}
	}
}

void sol2() {
	int h, k = sum1;
	if (n & 1) 
		h = n/2+1;
	else
		h = n/2;
	for (int i = n-1; i >= h; ++i) {
		if (k == 0)
			break;
		if (9 - (a[i]-'0') <= k) {
			k -= (9 - (a[i]-'0'));
			a[i] = '9';
		} else {
			a[i] = (a[i]-'0'+k) + '0';
			k -= k;
		}
	}
}

int main() {
	fast;
	indef();
	clock_t z = clock();

	cin >> a;
	n = a.size();
	for (int i = 0; i < n/2; ++i)
		sum1 += a[i] - '0';
	if (n&1)
		for (int i = n/2+1; i < n; ++i)
			sum2 += a[i] - '0';
	else
		for (int i = n/2; i < n; ++i)
			sum2 += a[i] - '0';
	if (sum1 < sum2)
		sol();
	else
		sol2(); 
	cout << a;

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}