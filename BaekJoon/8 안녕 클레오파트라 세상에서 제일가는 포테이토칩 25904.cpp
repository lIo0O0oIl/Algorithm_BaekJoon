// https://www.acmicpc.net/problem/25904

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n, x, d = 0;
    int t[1000];
    cin >> n >> x;

    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    int index = 0;

    while (true) {
        if (t[index % n] < x + index) {
            cout << index % n + 1;
            break;
        }
        index++;
    }
    return 0;
}