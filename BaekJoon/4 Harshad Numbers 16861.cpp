// https://www.acmicpc.net/problem/16861

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, temp = 0;
    cin >> n;

    while (true)
    {
        string s = to_string(n);
        for (int i = 0; i < s.size(); ++i)
        {
            temp += s[i] - '0';
        }

        if (n % temp == 0)
        {
            cout << n;
            return 0;
        }

        n++;
        temp = 0;
    }
}