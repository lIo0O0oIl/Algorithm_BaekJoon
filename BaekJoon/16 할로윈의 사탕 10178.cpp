// https://www.acmicpc.net/problem/10178

#include <iostream>
using namespace std;

int main() {
    int n, c, v;

    cin >> n;

    while (n--)
    {
        cin >> c >> v;

        cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s)." << endl;
    }
}