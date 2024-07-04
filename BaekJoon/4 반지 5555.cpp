// https://www.acmicpc.net/problem/5555

#include <iostream>
using namespace std;

int main() {
    string s, s1;
    int n, cnt = 0;

    cin >> s >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        s1 += s1;
        if (s1.find(s) != string::npos) //string::npos란 -1 값을 가지는 상수로 find() 함수 수행 시에 찾는 문자열이 없을 때 반환
            cnt++;
    }

    cout << cnt;
}