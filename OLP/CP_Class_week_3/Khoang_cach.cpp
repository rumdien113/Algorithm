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
const int N = 2e6+5;
int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};
void indef(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}

int a, b;
vi prime;

vector<int> sieve() {
    vector<bool> p(N, 1);
    p[0] = p[1] = 0;
    for (int i = 2; i * i <= N; ++i)
        if (p[i])
            for (int j = i * i; j <= N; j += i)
                p[j] = 0;
    vi res;
    for (int i = 2; i <= N; ++i)
        if (p[i])
            res.pb(i);
    return res;
}

vector<ii> factory(int n) {
    vector<ii> res;
    for (int i : prime) {
        if (i*i > n) break;
        int cnt = 0;
        while (n % i == 0) {
            cnt++;
            n /= i;
        }
        if (cnt)
            res.pb({i, cnt});
    }
    if (n > 1)
        res.pb({n, 1});
    return res;
}

void sol(int& a, int& b) {
    vector<ii> mapa = factory(a);
    vector<ii> mapb = factory(b);

    int ans = 0;
    unordered_map<int, int> map;
    for (auto i : mapa)
        map[i.st] = i.nd;
    for (auto i : mapb) {
        if (map.find(i.st) != map.end()) {
            ans += abs(i.nd - map[i.st]);
            map.erase(i.st);
        } else 
            ans += i.nd;
    }

    for (auto i : map)
        ans += i.nd;
    cout << ans << nl;
}

int main() {
    fast;
    indef();
    clock_t z = clock();

    prime = sieve();
    while (cin >> a >> b)
        sol(a, b);

    debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
