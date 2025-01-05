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

int t, n, res = 0;
vi a(N);
vi ans(N);

int main() {
	fast;
	indef();
	clock_t z = clock();

	a[0] = 0;
    a[1] = 1;
    ans[1] = 1;
    
    for (int i = 0; i < N; ++i) {
        if (2 * i < N) {
            a[2 * i] = a[i];
            // ans[2*i] = max(ans[i], a[2 * i]);
        }
        if (2 * i + 1 < N)
            a[2 * i + 1] = a[i] + a[i + 1];
            // ans[2*i+1] = max(ans[i], a[2 * i + 1]);
        res = max(res, a[i]);
        ans[i] = res;
    }

    // for (int i = 1; i <= 10; ++i)
    //     cout << i << ' ';
    // cout << nl;
    // for (int i = 1; i <= 10; ++i)
    //     cout << a[i] << ' ';
    // cout << nl;
    // for (int i = 1; i <= 10; ++i)
    //     cout << ans[i] << ' ';
    // cout << nl;
    

	cin >> t;
	while(t--) {
        cin >> n;
        cout << ans[n] << nl;
    }

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}
