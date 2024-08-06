// https://www.acmicpc.net/problem/29790

#include <iostream>
using namespace std;

int main() {
    int n, u, l;
    cin >> n >> u >> l;

    if (n >= 1000) {
        if (u >= 8000 || l >= 260)
            cout << "Very Good" << endl;
        else
            cout << "Good" << endl;
    }
    else
        cout << "Bad" << endl;

    return 0;
}