// https://www.acmicpc.net/problem/17614

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, result = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string s = to_string(i);

        for (auto a : s) {
            if (a == '3' || a == '6' || a == '9')
                result++;
        }
    }

    cout << result;
}