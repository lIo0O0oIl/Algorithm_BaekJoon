// https://www.acmicpc.net/problem/10824

#include<iostream>
#include <string>
using namespace std;

int main()
{
    string a, b, c, d;

    cin >> a >> b >> c >> d;

    string ab = a + b;
    string cd = c + d;

    long abl = stoll(ab);
    long cdl = stoll(cd);

    long long answer = abl + cdl;

    cout << answer;
}