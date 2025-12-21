// https://www.acmicpc.net/problem/1296

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[27] = {};
    int big = 0;
    string input;

    while (getline(cin, input))
    {
        for (int i = 0; i < input.size(); i++)
        {
            arr[input[i] - 97]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > big)
        {
            big = arr[i];
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == big)
        {
            cout << (char)(i + 97);
        }
    }
}