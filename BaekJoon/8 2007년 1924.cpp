// https://www.acmicpc.net/problem/1924

#include<iostream>
using namespace std;

int main()
{
    int year[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    string weeks[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
    int sum = 0;

    int x, y;

    cin >> x >> y;

    sum += y;

    for (int i = 0; i < x - 1; i++)
    {
        sum += year[i];     // 날짜 총 더하기
    }

    cout << weeks[sum % 7];         // 더한 날짜를 7로 나눠서 구해준다.
}