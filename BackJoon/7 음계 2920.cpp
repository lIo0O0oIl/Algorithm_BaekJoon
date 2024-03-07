// https://www.acmicpc.net/problem/2920

#include <iostream>
using namespace std;

int main()
{
    int arr[8];
    string str;

    for (int i = 0; i < 8; ++i)
        cin >> arr[i];

    for (int i = 0; i < 8; ++i)
    {
        if (arr[i] == i + 1 && str != "descending")
            str = "ascending";
        else if (arr[i] == 8 - i && str != "ascending")
            str = "descending";
        else
        {
            str = "mixed";
            break;
        }
    }

    cout << str;
}