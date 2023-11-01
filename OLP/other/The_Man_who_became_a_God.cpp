#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define nln '\n'
#define ll long long

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;

    while (t--) {
        int n, k, ans = 0;
        cin >> n >> k;

        vector<ll> v(n);
        vector<ll> a(n-1);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < n-1; i++)
            a[i] = abs(v[i] - v[i+1]);
        
        sort(a.begin(), a.end());

        for (int i = 0; i < n-k; i++) ans += a[i];

        cout << ans << endl;
    }

    return 0;
}
