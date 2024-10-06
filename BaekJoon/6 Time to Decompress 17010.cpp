// https://www.acmicpc.net/problem/17010

#include <iostream>
using namespace std;

int main() {
    int t, n;
    char c;
    cin >> t;

    while (t--) {
        cin >> n >> c;

        while (n--)
            cout << c;
        cout << endl;
    }
}