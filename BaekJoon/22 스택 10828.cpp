// https://www.acmicpc.net/problem/10828

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int t, n;
    string str;
    stack<int> stc;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> n;
            stc.push(n);
        }
        else if (str == "top")
        {
            if (!stc.empty())
                cout << stc.top() << '\n';
            else
                cout << "-1" << '\n';
        }
        else if (str == "size")
            cout << stc.size() << '\n';
        else if (str == "empty")
            cout << stc.empty() << '\n';
        else if (str == "pop")
        {
            if (stc.empty())
                cout << "-1" << '\n';
            else
            {
                cout << stc.top() << '\n';
                stc.pop();
            }
        }
    }
}