#include <iostream>
#include <vector>

using namespace std;

long long countWays(vector<long long>& arr, long long n, long long index = 0) {
    if (n == 1) {
        return 1;
    }
    if (n < 1 || index >= arr.size()) {
        return 0;
    }

    int waysWithoutCurrent = countWays(arr, n, index + 1);
    int waysWithCurrent = 0;
    if (n % arr[index] == 0) {
        waysWithCurrent = countWays(arr, n / arr[index], index);
    }

    return waysWithoutCurrent + waysWithCurrent;
}

int main() {
    vector<long long> arr = {2, 3, 5, 8};
    for (int i = 4; i < 70; i++)
    {
        long long s = arr[i-1] + arr[i-2];
        arr.push_back(s);
    }
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << countWays(arr, n) << endl;
    }
    return 0;
}