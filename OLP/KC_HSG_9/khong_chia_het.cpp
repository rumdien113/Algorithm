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

	int t, n, k;

	// [1..3][4..6][7..9][10..12] mỗi ô có n-1 số ko chia hết cho n
	// k/(n-1) thì ra được số cần tìm nằm trong đoạn nào
	// viết ra + thử test thì dc công thức lỏ lỏ ở dưới @@

	int main() {
		fast;
	  	indef();
	  	cin >> t;
	  	while(t--) {
	  		cin >> n >> k;
	  		cout << k + (k-1)/(n-1) << nl;
	  	}
	  	return 0;
	}