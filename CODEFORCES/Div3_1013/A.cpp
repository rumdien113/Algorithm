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
const int N = 1e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

int t, n, a[25];

void sol() {
    vector<ii> ok = {
        {2, 0}, {0, 0}, {2, 0}, {5, 0}, {0, 0}, {1, 0}, {0, 0}, {3, 0}
    };
    int res = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    if (n < 8) {
        cout << 0 << nl;
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0 || a[i] == 1 || a[i] == 2 || a[i] == 3 || a[i] == 5) {
            for (auto& pair : ok) {
                if (pair.st == a[i] && pair.nd == 0) {
                    pair.nd = 1;
                    res++;
                    break;
                }
            }
        }
        if (res == 8) {
            cout << i+1 << nl;
            break;
        }
    }
    if (res < 8)
        cout << 0 << nl;
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
