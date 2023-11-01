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

string s1, s2;
int ans = 0, a[26], b[26] = {0};

int main() {
	fast;
  	indef();
  	cin >> s1 >> s2;
    for (char c : s1) 
        if (c >= 'a' && c <= 'z') 
            a[c - 'a']++;
    for (char c : s2) 
        if (c >= 'a' && c <= 'z') 
            b[c - 'a']++;

    for (int i = 0; i < 26; i++)
    	ans += min(a[i], b[i]);
    cout << ans;
	return 0;
}
