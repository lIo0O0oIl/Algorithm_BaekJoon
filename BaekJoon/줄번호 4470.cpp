// https://www.acmicpc.net/problem/4470

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string str;

    cin >> n;
    getline(cin, str);

    for (int i = 1; i <= n; ++i)
    {
        getline(cin, str);
        cout << i << ". " << str << '\n';
    }
}