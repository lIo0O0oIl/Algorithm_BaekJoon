// https://www.acmicpc.net/problem/3135

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b, n, input, pushMax = 1001;
    vector<int> btn;
    cin >> a >> b >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        btn.push_back(input);
    }
    pushMax = max(a, b) - min(a, b);
    for (int i = 0; i < n; i++)
    {
        if (max(b, btn[i]) - min(b, btn[i]) + 1 < pushMax)
        {
            pushMax = max(b, btn[i]) - min(b, btn[i]) + 1;
        }
    }
    cout << pushMax;
}