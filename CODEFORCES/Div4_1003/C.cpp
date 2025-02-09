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
#define nl "\n"
#define ii pair<int,int>
#define vi vector<int>
#define yes "Yes"
#define no "No"

const int M = 1e9+7;
const int N = 2e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
}

int t, m, n;

void sol() {
    int a[N], b;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    cin >> b;
    
    if (n == 1) {
        cout << yes << nl;
        return;
    }

    bool pre0 = true, pre1 = true;
    for (int i = 1; i < n; ++i) {
        bool new0 = false, new1 = false;
        int cur0 = a[i];
        int cur1 = b - a[i];

        if (pre0) {
            int preVal = a[i-1];
            if (preVal <= cur0)
                new0 = true;
            if (preVal <= cur1)
                new1 = true;
        }
        if (pre1) {
            int preVal = b - a[i-1];
            if (preVal <= cur0)
                new0 = true;
            if (preVal <= cur1)
                new1 = true;
        }

        pre0 = new0;
        pre1 = new1;
    }

    if (pre0 || pre1)
        cout << yes << nl;
    else 
        cout << no << nl;
}

int main() {
    fast;
    indef();
    clock_t z = clock();

    cin >> t;
    while(t--)
        sol();

    debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
