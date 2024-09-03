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

const int M = 1e6+7;
const int N = 2e5+5;

int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int t;

void sol() {
	ll n, m, h, rank = 1, score = 0, pen = 0;
	cin >> n >> m >> h;
	for (int x = 0; x < n; ++x) {
		ll curr_score = 0, curr_pen = 0, time = 0, a[N];
		for (int i = 0; i < m; ++i)
			cin >> a[i];
		sort(a, a + m);
		for (int i = 0; i < m; ++i) {
			if (time + a[i] <= h) {
				curr_score++;
				time += a[i];	
				curr_pen += time;
			}
			if (x == 0) {
				score = curr_score;
				pen = curr_pen;
			}
		}
		// cout << "curr_score = " << curr_score << " | curr_pen = " << curr_pen << nl;
		if((curr_score > score) || (curr_score == score && pen > curr_pen))
			rank++;
	}
	// cout << "score = " << score << " | pen = " << pen << nl;
	cout << rank << nl;
}

int main() {
	fast;
  	indef();
  	cin >> t;
  	while(t--)
  		sol();
  	return 0;
}

