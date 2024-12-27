// https://www.acmicpc.net/problem/32795

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    string a, b;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;

        bool isExist = true;
        set<char> str;
        for (int j = 0; j < a.size(); ++j)
            str.insert(a[j]);
        for (int j = 0; j < b.size(); ++j)
        {
            if (str.find(b[j]) == str.end())
            {
                isExist = false;
                break;
            }
        }

        if (isExist)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}