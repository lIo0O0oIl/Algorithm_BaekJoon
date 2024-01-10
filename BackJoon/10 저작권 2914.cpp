// https://www.acmicpc.net/problem/2914

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    cout << n * (m - 1) + 1 << endl; // 평균 멜로디에 1 더해주기 (올림이기 때문)
}