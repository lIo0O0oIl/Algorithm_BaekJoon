// https://www.acmicpc.net/problem/29722

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string day, yy, mm, dd;
    int time, y, m, d;

    cin >> day;
    cin >> time;

    stringstream ss(day);
    std::getline(ss, yy, '-');
    std::getline(ss, mm, '-');
    std::getline(ss, dd, '-');

    y = stoi(yy);
    m = std::stoi(mm);
    d = std::stoi(dd);

    d += time;

    while (d > 30)
    {
        d -= 30;
        m++;
    }

    while (m > 12)
    {
        m -= 12;
        y++;
    }

    cout << y << "-";
    if (m < 10)
        cout << 0 << m << "-";
    else
        cout << m << "-";
    if (d < 10)
        cout << 0 << d;
    else
        cout << d;
}