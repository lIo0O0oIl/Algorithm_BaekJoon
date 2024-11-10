// https://www.acmicpc.net/problem/10987

#include <iostream>
using namespace std;

int main()
{
    string str;
    int cnt = 0;
    char n[] = { 'a', 'e', 'o', 'i', 'u' };

    cin >> str;

    for (int i = 0; i < str.length(); ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (str[i] == n[j])
                cnt++;
        }
    }

    cout << cnt;
}