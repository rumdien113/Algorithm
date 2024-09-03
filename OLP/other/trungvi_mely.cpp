#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>

#define nln '\n'
#define ll long long
#define FORI(q, w) for(int i = q; i < w; i++)
#define FORJ(q, w) for(int j = q; j < w; j++)

using namespace std;
const int N = 2e5+5;
int n, cnt;
int a[N], b[N], diff[N];

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}
int main() {
	
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);  cout.tie(NULL);
	indef();
  	cin >> n;
  	FORI(0, n) { cin >> a[i]; }
  	FORI(0, n) { cin >> b[i]; }

  	
    // a[i] - b[i] + a[j] - b[j] > 0
    // FORI(0,n) cout << sum[i] << ' '; 
    // cout << '\n';
    // FORI(0,n) cout << diff[i] << ' ';
  	ll ans = 0;
    FORI(0,n) diff[i] = a[i] - b[i];
    sort(diff,diff+n);

    int l = 0, r = n-1;
    while(l<r){
    	if(diff[l] + diff[r] > 0){
    		ans += r - l;
    		r--;
    	}
    	else l++;
    }
    
    cout << ans;
	return 0;
}