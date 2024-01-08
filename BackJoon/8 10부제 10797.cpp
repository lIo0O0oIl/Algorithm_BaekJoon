// https://www.acmicpc.net/problem/10797

#include <iostream>
using namespace std;

int main() {
    int n, input, cnt = 0;

    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        cin >> input;
        if (input == n)
            cnt++;
    }

    cout << cnt;
}