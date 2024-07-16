// https://www.acmicpc.net/problem/14720

#include <iostream>
using namespace std;

int main() {

    int n, max = 0, c = 0;
    int arr[1000];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0 && c == 0) {
            max++;
            c = 1;
        }
        if (arr[i] == 1 && c == 1) {
            max++;
            c = 2;
        }
        if (arr[i] == 2 && c == 2) {
            max++;
            c = 0;
        }
    }

    cout << max;
}