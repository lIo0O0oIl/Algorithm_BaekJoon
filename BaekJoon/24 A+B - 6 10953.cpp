// https://www.acmicpc.net/problem/10953

#include <iostream>
using namespace std;

int main() {
    int n, m, t;
    char c;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> c >> m;
        cout << n + m << endl;
    }
}