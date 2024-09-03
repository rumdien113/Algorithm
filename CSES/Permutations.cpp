#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <utility>
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
#define nln '\n'
#define ll long long
#define X first
#define Y second
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int n;

int main() {
	fast;
  	indef();
  	cin >> n;
	if (n == 2 || n == 3) {
		cout << "NO SOLUTION";
		return 0;
	}  	
	for (int i = 2; i <= n; i+=2)
		cout << i << " ";
	for (int i = 1; i <= n; i+=2)
		cout << i << " ";

	return 0;
}
