// https://www.acmicpc.net/problem/9252

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    string n, m;
    vector<vector<int>> dp;

    cin >> n >> m;
    dp.resize(n.size() + 1, vector<int>(m.size() + 1));

    for (int i = 1; i <= n.size(); ++i)
    {
        for (int j = 1; j <= m.size(); ++j)
        {
            if (n[i - 1] == m[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    cout << dp[n.size()][m.size()] << '\n';

    int i = n.size(), j = m.size();
    stack<char> answer;
    while (dp[i][j] != 0)
    {
        if (dp[i][j] == dp[i][j - 1]) j--;
        else if (dp[i][j] == dp[i - 1][j]) i--;
        else
        {
            answer.push(n[i - 1]);
            i--;
            j--;
        }
    }
    while (!answer.empty())
    {
        cout << answer.top();
        answer.pop();
    }
}

/*
  C A P C A K
A 0 1 1 1 1 1
C 1 1 1 2 2 2
A 1 2 2 2 3 3
Y 1 2 2 2 3 3
K 1 2 2 2 3 4
P 1 2 3 3 3 4

= ACAK

  J A G U G G M
G 0 0 1 1 1 1 1
A 0 1 1 1 1 1 1
J  1 1 1 1 1 1 1
A 1 2 2 2 2 2 2
G 1 2 3 3 3 3 3
G 1 2 3 3 4 4 4
M 1 2 3 3 4 4 5

= JAGGM
*/