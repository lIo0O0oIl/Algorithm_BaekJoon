// https://www.acmicpc.net/problem/30454

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, cnt, sum;
    cin >> n >> m;
    cnt = sum = 0;

    vector<int> vec;

    for (int i = 0; i < n; ++i)
    {
        int k = 0;
        string l;
        cin >> l;

        for (int j = 0; j < m; ++j)
        {
            if (k != l[j] - '0' && l[j] - '0' == 1)
                cnt++;

            k = l[j] - '0';
        }

        vec.push_back(cnt);
        cnt = 0;
    }

    sort(vec.begin(), vec.end(), greater<>());

    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[0] == vec[i])
            sum++;
    }

    cout << vec[0] << " " << sum;
}