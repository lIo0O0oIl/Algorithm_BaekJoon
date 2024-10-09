// https://www.acmicpc.net/problem/31428

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, sum = 0;
    char m;
    vector<char> vec;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        char k;
        cin >> k;
        vec.push_back(k);
    }

    cin >> m;

    for (int i = 0; i < n; ++i)
    {
        if (m == vec[i])
            sum++;
    }

    cout << sum;
}