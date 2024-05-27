// https://www.acmicpc.net/problem/2460

#include <iostream>
using namespace std;

int main() {
    int n, m, sum = 0, max = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> n >> m;

        sum += -n + m;

        if (sum > max)
            max = sum;
    }

    cout << max;
}