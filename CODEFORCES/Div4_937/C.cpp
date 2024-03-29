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

int t;
string s;

void sol() {
	bool am;
	cin >> s;
	int hh = stoi(s.substr(0, 2));
	int mm = stoi(s.substr(3, 2));
	
	if (hh == 0 && hh != 12) {
        hh = 12;
        cout << (hh < 10 ? "0" : "") << hh << ':' << (mm < 10 ? "0" : "") << mm << " AM" << endl;
    } else if (hh == 12 && hh != 0) {
        hh = 12;
        cout << (hh < 10 ? "0" : "") << hh << ':' << (mm < 10 ? "0" : "") << mm << " PM" << endl;
    } else if (hh < 12 && hh != 0) {
        hh = hh; 
        mm = mm;
        cout << (hh < 10 ? "0" : "") << hh << ':' << (mm < 10 ? "0" : "") << mm << " AM" << endl;
    } else if (hh > 12 && hh != 0) {
        hh = hh - 12;
        mm = mm;
        cout << (hh < 10 ? "0" : "") << hh << ':' << (mm < 10 ? "0" : "") << mm << " PM" << endl;
    }
}

int main() {
	fast;
	indef();
	clock_t z = clock();

	cin >> t;
	while (t--) 
		sol();	

	debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}