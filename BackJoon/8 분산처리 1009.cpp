// https://www.acmicpc.net/problem/1009

#include <iostream>
using namespace std;

int main() {
    int t, a, b, mul;
    cin >> t;

    while (t--) {
        mul = 1;
        cin >> a >> b;

        b = !(b % 4) ? 4 : b % 4;           // 4로 나눠서 나머지가 있으면 B 는 4로 하고 없으면 4로 나눠준다.

        while (b--) mul *= a;       // b 만큼 a 를 곱해준다.

        cout << (mul % 10 ? mul % 10 : 10) << '\n';     // 10으로 나눠서 뭐가 있으면 10으로 나누고 없으면 10을 출력함.
    }
}