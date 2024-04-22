// https://www.acmicpc.net/problem/26489

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cnt = 0;
    string str;
    while (getline(std::cin, str))
    {
        cnt++;
    }
    cout << cnt;
}