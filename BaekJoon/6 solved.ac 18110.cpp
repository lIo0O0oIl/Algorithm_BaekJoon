// https://www.acmicpc.net/problem/18110

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    float k, sum = 0;
    vector<int> v;

    cin >> n;
    if (n == 0)
    {
        cout << 0;
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            cin >> m;
            v.push_back(m);
        }

        k = round(n * 0.15);        // 절사평균 구하기
        sort(v.begin(), v.end());

        for (int i = k; i < v.size() - k; ++i)
        {
            sum += v[i];
        }

        cout << round(sum / (n - (k * 2)));;
    }
}