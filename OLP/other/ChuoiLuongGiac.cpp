#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <utility>
#include <cmath>
#include <iomanip>
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
#define nln '\n'
#define ll long long
#define X first
#define Y second
const ll N = 10e6+5;

using namespace std;

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

vector<double> gt(N);
double x, n;

void gtt() {
	gt[1] = 1.0;
	for (int i = 2; i < N; i++)
		gt[i] = gt[i - 1] * i;
}

double msin() {
  double sinv = x;
  for (int i = 3; i <= n; i += 2) {
    sinv += pow(-1, i / 2) * pow(x, i) / gt[i];
  }
  return sinv;
}

double mcos() {
  double cosv = 1.0;
  for (int i = 2; i <= n; i += 2) {
    cosv += pow(-1, i / 2) * pow(x, i) / gt[i];
  }
  return cosv;
}

int main() {
	fast;
  	indef();
  	gtt();
  	cin >> x >> n;
  	cout << setprecision(15) << fixed << msin() << " " << mcos();
	return 0;
}