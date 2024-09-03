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

int n, sum = 0;


// bool compare(ii a, ii b) {
// 	if (a.st == b.st)
// 		return a.nd < b.nd;
// 	return a.st > b.st;
// }

int main() {
	fast;
  	indef();
  	cin >> n;
  	vector<int> mp(n);
  	for (int i = 0; i < n; i++) {
  		sum = 0;
  		int a, b, c, d;
  		cin >> a >> b >> c >> d;
  		sum = a + b + c + d;
  		mp[i] = sum;
  	}
  	int first = mp[0];
  	int rank = 1;
  	for(int i=1; i<n; i++)
  	{
  		if(mp[i] > first)
  		{
  			rank++;
  		}
  	}
  	cout<<rank;
  	//sort(all(mp), compare);
  	//cout << mp[0].nd + 1;
	return 0;
}