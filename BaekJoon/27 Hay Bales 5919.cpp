// https://www.acmicpc.net/problem/5919

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, all = 0, answer = 0;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        all += v[i];
    }

    all = all / n;

    for (int i = 0; i < n; ++i)
    {
        if (v[i] > all) answer += v[i] - all;
    }

    cout << answer;
}