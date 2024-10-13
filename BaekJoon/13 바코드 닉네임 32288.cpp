// https://www.acmicpc.net/problem/32288

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string str;

    cin >> n;
    cin >> str;

    for (int i = 0; i < n; ++i)
    {
        if (str[i] == 'I')
        {
            str[i] = tolower(str[i]);
            cout << str[i];
        }
        else
        {
            str[i] = towupper(str[i]);
            cout << str[i];
        }
    }
}