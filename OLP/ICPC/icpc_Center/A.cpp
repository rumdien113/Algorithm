#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define db long double
#define st first
#define nd second
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
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

ll n, a[N];

int main() {
    fast;
    indef();
int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) if (a[i] < 0) a[i] = 0; else break;
    for (int i = n-1; i >= 0; i--) if (a[i] < 0) a[i] = 0; else break;
    
    ll sum1 = 0, sum2 = -M, mx = -M;
    for (int i = 0; i < n; i++) {
        sum1 += a[i];
        mx = max(mx, a[i]);
        sum2 = max(sum1, sum2);
        if (sum1 < 0) sum1 = 0;
    }
    cout << sum2 - mx;
    return 0;
}