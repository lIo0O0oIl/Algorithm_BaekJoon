// https://www.acmicpc.net/problem/1037

#include <iostream>
#include <algorithm>
using namespace std;

int arr[51];

int main() {
    int n, result;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    result = arr[0] * arr[n - 1];

    cout << result;
}