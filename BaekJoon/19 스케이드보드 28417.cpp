// https://www.acmicpc.net/problem/28417

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t, n, m, k;
    vector<int> human;
    vector<int> arr;

    cin >> t;
    human.resize(t);

    for (int i = 0; i < t; ++i)
    {
        arr.clear();
        arr.resize(0);

        cin >> n >> m;
        human[i] += max(n, m);

        for (int j = 0; j < 5; ++j)
        {
            cin >> k;
            arr.push_back(k);
        }

        sort(arr.begin(), arr.end());

        human[i] += arr[4];
        human[i] += arr[3];
    }

    sort(human.begin(), human.end());

    cout << human.back();
}