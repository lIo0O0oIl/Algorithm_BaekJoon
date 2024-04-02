// https://www.acmicpc.net/problem/25191

#include <iostream>
using namespace std;

int main() {
    int n, a, b, sum;
    cin >> n >> a >> b;

    sum = a / 2 + b;

    cout << min(n, sum);
}