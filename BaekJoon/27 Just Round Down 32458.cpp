// https://www.acmicpc.net/problem/32458

#include <iostream>
using namespace std;

int main()
{
    string str, end = "";
    cin >> str;

    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == '.')
            break;
        end += str[i];
    }

    cout << end;
}