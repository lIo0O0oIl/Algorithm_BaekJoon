// https://www.acmicpc.net/problem/5357

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;

        char first = str[0];
        cout << first;

        for (int j = 0; j < str.length(); ++j)
        {
            if (first != str[j])
            {
                first = str[j];
                cout << first;
            }
        }

        cout << endl;
    }
}
