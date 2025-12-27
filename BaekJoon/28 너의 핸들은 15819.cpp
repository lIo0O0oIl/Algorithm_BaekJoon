// https://www.acmicpc.net/problem/15819

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int main()
{
    int n, index;
    cin >> n >> index;
    vector<string> v(n); 

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    cout << v[index - 1];
}