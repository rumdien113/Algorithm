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

ll n;

bool ok(ll x) {
    if (x < 2) return false;
    for (ll i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int len(ll x) {
    int res = 0;
    while (x) {
        res++;
        x /= 10;
    }
    return res;
}

int main() {
fast;
indef();
    clock_t z = clock();

    cin >> n;
    int k = len(n);
    while (n > 0) {
        if (!ok(n)) {
            cout << "NO";
            return 0;
        }
        n %= (ll)pow(10, k - 1); 
        k--;
    }
    cout << "YES";

    debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
