// https://www.acmicpc.net/problem/28224

#include <iostream>
using namespace std;

int main() {
    int n, m, sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        sum += m;
    }

    cout << sum;
}