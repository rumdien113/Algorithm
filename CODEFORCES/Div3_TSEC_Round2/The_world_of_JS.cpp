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

ll t, a, b, c;

string sol(int a, int b, int c) {
    if (a > c || c == a + 1)
        return no;
    if ((c - a) % b <= 1)
        return yes;
    // int i = 1;
    // while (a + b <= c) {
    //     if (a + i*b == c || a + i*b + 1 == c)
    //         return yes;
    // }
    return no;
}

int main() {
	fast;
	indef();
	clock_t z = clock();
 
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        cout << sol(a, b, c) << nl;
    }

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}
