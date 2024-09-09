// https://www.acmicpc.net/problem/13300

#include <iostream>
using namespace std;

int main() {
    int arr[2][7] = { 0 };
    int n, k, res = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int s, g;
        cin >> s >> g;

        arr[s][g]++;
    }


    for (int i = 0; i < 2; i++) {
        for (int j = 1; j < 7; j++) {
            if (arr[i][j] != 0) {
                res += arr[i][j] / k;

                if (arr[i][j] % k != 0)
                    res++;
            }
        }
    }

    cout << res;
}