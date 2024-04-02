// https://www.acmicpc.net/problem/10101

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == 60 && b == 60 && c == 60) // 세 각이 모두 60도 일 때
        cout << "Equilateral";
    else if (a + b + c == 180) {
        if (a == b || b == c || c == a)  // 세 각의 합이 180이면서 두 각이 같을때
            cout << "Isosceles";
        else if (a != b || b != c || c != a) // 세 각의 합이 180이면서 세 각이 다 다를때
            cout << "Scalene";
    }
    else  // 3각의 크기가 모두 다를때
        cout << "Error";
}