// https://www.acmicpc.net/problem/2455

#include <iostream>
using namespace std;

int main() {
    int n, m, sum = 0, max = 0; // 내린 사람, 탄 사람, 합, 최대 사람 수

    for (int i = 0; i < 4; i++)
    {
        cin >> n >> m;

        sum += m - n; // 탄 사람에서 내린 사람 빼기

        if (sum > max)
            max = sum;
    }

    cout << max;
}