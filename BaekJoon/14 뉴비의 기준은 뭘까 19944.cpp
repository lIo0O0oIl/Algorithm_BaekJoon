// https://www.acmicpc.net/problem/19944

#include <iostream>
using namespace std;

int main() {
    int n, m; // 올드비 기준, 학년

    cin >> n >> m;

    if (m == 1 || m == 2) // 1학년 2학년
        cout << "NEWBIE!";
    else if (m <= n) // 뉴비가 아니면서 n학년 이하
        cout << "OLDBIE!";
    else
        cout << "TLE!";
}