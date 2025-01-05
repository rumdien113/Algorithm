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

int t;
ll m, n;


int dfs(int pos, bool has_nine, bool tight, int sum, const vector<int>& digits, int dp[20][2][2][9]) {
    if (pos == digits.size()) {
        return has_nine && sum % 9 == 0 ? 1 : 0;
    }
    if (dp[pos][has_nine][tight][sum % 9] != -1) {
        return dp[pos][has_nine][tight][sum % 9];
    }

    int limit = tight ? digits[pos] : 9;
    int result = 0;

    for (int digit = 0; digit <= limit; digit++) {
        result += dfs(
            pos + 1,
            has_nine || (digit == 9),
            tight && (digit == limit),
            sum + digit,
            digits,
            dp
        );
    }

    dp[pos][has_nine][tight][sum % 9] = result;
    return result;
}

// Đếm số chứa chữ số 9 và chia hết cho 9 từ 1 đến x
int count_nine(ll x) {
    if (x <= 0) return 0;
    vector<int> digits;
    while (x > 0) {
        digits.push_back(x % 10);
        x /= 10;
    }
    reverse(digits.begin(), digits.end());

    int dp[20][2][2][9];
    memset(dp, -1, sizeof(dp));

    return dfs(0, false, true, 0, digits, dp);
}

void sol() {
    cin >> m >> n;
    cout << (n - m + 1) - count_nine(n) - count_nine(m-1) << nl;
}

int main() {
	fast;
	indef();
	clock_t z = clock();
 
    cin >> t;
    while(t--)
        sol();

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}
