// https://www.acmicpc.net/problem/2490

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, sum;

    for (int i = 0; i < 3; i++)
    {
        sum = 0;

        cin >> a >> b >> c >> d;

        sum = a + b + c + d;

        switch (sum)
        {
        case 0:
            cout << "D\n";
            break;
        case 1:
            cout << "C\n";
            break;
        case 2:
            cout << "B\n";
            break;
        case 3:
            cout << "A\n";
            break;
        case 4:
            cout << "E\n";
            break;
        }
    }
}