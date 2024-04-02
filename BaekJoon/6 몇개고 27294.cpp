// https://www.acmicpc.net/problem/27294

#include <iostream>

using namespace std;

int main() {
    int t, s;

    cin >> t >> s;

    if (t >= 12 && t <= 16 && s == 0)       // s 는 물의 유무로 0이여야 함.
        cout << 320;
    else
        cout << 280;
}


// t 가 12 이상 16이하면 점심