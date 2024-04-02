// https://www.acmicpc.net/problem/31450

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n % m == 0)
        cout << "Yes";
    else
        cout << "No";
}