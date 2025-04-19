// https://www.acmicpc.net/problem/10599

#include <iostream>
#include <math.h>
using namespace std; 

int main()
{
int a, b, c, d;
while (true)
{
cin >> a >> b >> c >> d;
if (a == 0 && b == 0 && c == 0 && d == 0) break;
cout << abs(c - b) << ' ' << abs(d - a) << '\n';
}
}