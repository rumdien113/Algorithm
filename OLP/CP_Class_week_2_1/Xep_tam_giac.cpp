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
        
    #endif
}

int n, a[5005];
set<tuple<int, int, int>> s;
bool isTriangle(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    fast;
    // indef();
    clock_t z = clock();
    freopen("TRIANGLES.INP","r",stdin);
    freopen("TRIANGLES.OUT","w",stdout);
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n - 2; ++i)
        for (int j = i+1; j < n - 1; ++j)
            for (int k = j+1; k < n; ++k)
                if (isTriangle(a[i], a[j], a[k]))
                    s.insert({a[i], a[j], a[k]}); 
    cout << s.size();

    debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
