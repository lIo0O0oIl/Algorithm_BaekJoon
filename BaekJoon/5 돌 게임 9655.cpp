// https://www.acmicpc.net/problem/9655

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 1)
        cout << "SK";
    else
        cout << "CY";
}