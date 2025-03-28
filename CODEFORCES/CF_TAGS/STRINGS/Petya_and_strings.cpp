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

string s1, s2;

int sol() {
    int n = s1.size();
    for (int i = 0; i < n; ++i) {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] += 32;
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] += 32;
        if (s1[i] > s2[i])
            return 1;
        if (s1[i] < s2[i])
            return -1;
    }
    return 0;
}

int main() {
    fast;
    indef();
    clock_t z = clock();
    
    cin >> s1 >> s2;
    cout << sol();

    debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}
