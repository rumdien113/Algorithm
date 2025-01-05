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
const int N = 2e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif
}

int t, k;

void sol() {
    cin >> k;
    int a[N], mp[N] = {0};
    ii ans = {-1, -1};
    for (int i = 1; i <= k; ++i) {
        cin >> a[i];
        mp[a[i]]++;  
    } 
    for (int i = 1; i <= k; ++i) {
        if (a[i] * a[i] == k-2) { 
            if (mp[a[i]] > 1)
                ans = {a[i], a[i]};
        } else if ((k-2)%a[i] == 0) {
            if (mp[a[i]] > 0 && mp[(k-2) / a[i]] > 0)
                ans = {a[i], (k-2)/a[i]};
        }
    }
    cout << ans.st << ' ' << ans.nd << nl;
}

int main() {
  fast;
    indef();

    cin >> t;
    while(t--)
        sol();

    return 0;
}

