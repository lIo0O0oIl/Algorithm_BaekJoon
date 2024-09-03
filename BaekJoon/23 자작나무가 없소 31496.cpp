// https://www.acmicpc.net/problem/31496

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m;
    int sum = 0;
    string removeItem, item;

    cin >> n;
    cin >> removeItem;

    for (int i = 0; i < n; ++i)
    {
        cin >> item >> m;

        size_t start = 0, end;
        bool found = false;

        while ((end = item.find('_', start)) != string::npos)
        {
            string part = item.substr(start, end - start);
            if (part == removeItem)
            {
                sum += m;
                found = true;
                break;
            }
            start = end + 1;
        }

        if (!found && item.substr(start) == removeItem)
            sum += m;
    }

    cout << sum << endl;
}