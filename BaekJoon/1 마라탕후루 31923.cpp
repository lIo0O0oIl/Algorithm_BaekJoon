// https://www.acmicpc.net/problem/31923

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, a, b;
    vector<int> i1, i2, answer;

    cin >> t >> a >> b;
    i1 = i2 = vector<int>(t);

    for (int& a : i1)
        cin >> a;

    for (int& b : i2)
        cin >> b;

    for (int i = 0; i < t; ++i)
    {
        int j = 0;
        int p = i1[i];
        int q = i2[i];

        while (p != q)
        {
            p += a;
            q += b;
            ++j;

            if (j == 10000)
            {
                cout << "NO";
                return 0;
            }
        }

        answer.push_back(j);
    }

    cout << "YES" << "\n";

    for (int& i : answer)
        cout << i << " ";
}