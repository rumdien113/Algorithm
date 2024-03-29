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

int t, n;
vi binarys;

vi BinaryNumbers() {
    vector<int> biNum;

    for (int i = 1; i < (1 << 5); ++i) {
        string bi = "";
        int tmp = i;
        while (tmp > 0) {
            int digit = tmp % 2;
            bi = to_string(digit) + bi;
            tmp /= 2;
        }
        biNum.push_back(stoi(bi));
    }
    return biNum;
}

bool check(int x) {
	while(x > 0) {
		if (x % 10 > 1) return false;
		x /= 10;
	}
	return true;
}

void ccc() {
	cout << "YES" << nl;
	return;
}

void sol() {
	cin >> n;
	if (n == 1) {
		cout << "YES" << nl;
		return;
	}
	for (int i : binarys)
		if (n > 1) 
			while (n % i == 0 && i > 1)
				n /= i;
	if (n == 1) {
		cout << "YES" << nl;
		return;
	}
	cout << "NO" << nl;
}

int main() {
	fast;
	indef();
	clock_t z = clock();

	binarys = BinaryNumbers();
	reverse(all(binarys));
	cin >> t;
	while (t--)
		sol();

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}