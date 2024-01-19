// https://www.acmicpc.net/problem/1712

#include <iostream>
using namespace std;

int main() {
    int a, b, c; // 고정 비용, 가변 비용, 판매 금액

    cin >> a >> b >> c;

    if (b >= c) // 가변 비용이 판매 금액보다 크거나 같으면 
        cout << -1; // 수익이 없으니까 -1
    else
        cout << a / (c - b) + 1; // 손익분기점 구하는 방법
}