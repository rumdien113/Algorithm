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

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

int reverse(int n) {
    int res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int n;
set<int> ans;

int main() {
fast;
indef();
    clock_t z = clock();

    cin >> n;
    for (int i = 2; i <= n; ++i)
        if (isPrime(i) && isPrime(reverse(i)))
            ans.insert(i);
    for (auto i : ans) cout << i << ' ';

    debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
