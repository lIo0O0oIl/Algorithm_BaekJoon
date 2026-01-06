// https://www.acmicpc.net/problem/13623

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a != b && b == c) cout << 'A';
    else if (a != b && a == c) cout << 'B';
    else if (a != c && a == b) cout << 'C';
    else cout << '*';
}