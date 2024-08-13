// https://www.acmicpc.net/problem/25377

#include <iostream>
using namespace std;

int main() {
    int n, a, b, minTime = 9999;
    cin >> n;

    while (n--) {
        cin >> a >> b;
        if (a <= b && b < minTime)
            minTime = b;
    }
    if (minTime == 9999)
        cout << -1 << endl;
    else
        cout << minTime << endl;
}