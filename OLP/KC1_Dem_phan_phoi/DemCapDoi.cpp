#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <climits>
#include <utility>
#include <map>
#include <cstring>
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

const int N = 1e9 + 5;

void indef(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

ll n, x, ans = 0;

int main() {
    fast;
    indef();
    cin >> n >> x;
	map<int, int> a;

    for (int i = 0; i < n; i++){
        ll k; cin >> k;	
        ans += a[x-k];
        a[k]++;
    }
    cout << ans;
    return 0;
}
