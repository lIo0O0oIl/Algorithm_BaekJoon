// https://www.acmicpc.net/problem/5554

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << (a + b + c + d) / 60 << endl;
    cout << (a + b + c + d) % 60;
}