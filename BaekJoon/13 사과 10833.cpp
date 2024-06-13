// https://www.acmicpc.net/problem/10833

#include <iostream>
using namespace std;

int main() {
    int n, s, a, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s >> a;
        sum += a % s;
    }

    cout << sum;
}