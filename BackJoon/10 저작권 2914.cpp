// https://www.acmicpc.net/problem/2914

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    cout << n * (m - 1) + 1 << endl; // 평균 멜로디에 1 더해주기 (올림이기 때문)
}


// '올림'이라는 단서가 있다.
// 주어진 평균보다 하나 작은 값으로 계산한 후 1을 더해주면 무조건 올림 처리가 된다.