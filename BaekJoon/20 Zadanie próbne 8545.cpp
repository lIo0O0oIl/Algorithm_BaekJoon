// https://www.acmicpc.net/problem/8545

#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i = str.length() - 1; i >= 0; --i)
        cout << str[i];
}