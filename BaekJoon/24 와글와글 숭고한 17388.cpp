// https://www.acmicpc.net/problem/17388

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int ans[4];
    int press = 1000000;
    int sum = 0, index = 0;

    for (int i = 1; i <= 3; i++)
    {
        cin >> ans[i];
        if (press > ans[i])
        {
            press = ans[i];
            index = i;
        }
        sum += ans[i];
    }
    if (sum >= 100)
    {
        cout << "OK" << endl;
    }
    else
    {
        switch (index)
        {
        case 1:
            cout << "Soongsil" << endl;
            break;
        case 2:
            cout << "Korea" << endl;
            break;
        case 3:
            cout << "Hanyang";
            break;
        }
    }
}