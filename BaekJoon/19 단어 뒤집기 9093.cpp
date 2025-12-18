// https://www.acmicpc.net/problem/9093

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    string n, temp = "";
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; ++i)
    {
        getline(cin, n);
        for (int j = 0; j < n.size(); j++)
        {
            if (n[j] == ' ')
            {
                for (int k = temp.size() - 1; k >= 0; --k)
                {
                    cout << temp[k];
                }
                temp = "";
                cout << ' ';
            }
            else temp += n[j];
        }
        for (int k = temp.size() - 1; k >= 0; --k)
        {
            cout << temp[k];
        }
        temp = "";
        cout << '\n';
    }
}