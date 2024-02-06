// https://www.acmicpc.net/problem/24883

#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    if (c == 'N' || c == 'n')
        cout << "Naver D2";
    else
        cout << "Naver Whale";
}