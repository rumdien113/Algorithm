#include<bits/stdc++.h>
#include <cctype>
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
#define yes "YES"
#define no "NO"

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

int n;
string s;

void sol() {
    int res = 0, a[30]{0};
    vector<char> check;
    for (int i = 0; i < n; ++i) {
        char z = tolower(s[i]);
        if (a[z-'a'] == 0) {
            check.pb(tolower(s[i]));
            a[z-'a'] = 1;
            res++;
        }
    }
    cout << nl << (res == ('z'-'a'+1) ? yes : no) << nl; 
}

int main() {
    fast;
    indef();
    clock_t z = clock();
    
    cin >> n >> s;
    sol(); 
    debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
