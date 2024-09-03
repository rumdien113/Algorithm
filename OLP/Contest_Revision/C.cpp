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

string s1, s2;
vector<string> ok1 = {"AB", "BA", "BC", "CB", "CD", "DC", "DE", "ED", "EA", "AE"};
vector<string> ok2 = {"AD", "DA", "AC", "CA", "BE", "EB", "BD", "DB", "CE", "EC"};
int check1 = 0, check2 = 0;

int main() {
	fast;
	indef();
	clock_t z = clock();

	cin >> s1 >> s2;
	for (auto i : ok1) {
		if (s1 == i)
			check1 = 1;
		if (s2 == i)
			check2 = 1;
	}
	for (auto i : ok2) {
		if (s1 == i)
			check1 = 2;
		if (s2 == i)
			check2 = 2;
	}
	cout << (check1 == check2 ? "Yes" : "No");
	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}