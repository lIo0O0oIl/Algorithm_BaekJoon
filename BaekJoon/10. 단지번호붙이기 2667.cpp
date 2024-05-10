// https://www.acmicpc.net/problem/2667

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, cnt, sum = 0;
vector<vector<pair<char, bool>>> vec;
vector<int> houseCount;
int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

void DFS(int x, int y)
{
    vec[y][x].second = true;

    for (int i = 0; i < 4; ++i)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= n || ny < 0 || ny >= n)
            continue;

        if (vec[ny][nx].first == '1' && vec[ny][nx].second == false)
        {
            cnt++;
            DFS(nx, ny);
        }
    }
}

int main()
{
    cin >> n;

    vec.resize(n, vector<pair<char, bool>>(n));

    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;
        for (int j = 0; j < str.length(); ++j)
        {
            vec[i][j].first = str[j];
            vec[i][j].second = false;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (vec[i][j].first == '1' && vec[i][j].second == false)
            {
                DFS(j, i);
                sum++;
                cnt++;

                houseCount.push_back(cnt);
                cnt = 0;
            }
        }
    }

    sort(houseCount.begin(), houseCount.end());

    cout << sum << '\n';
    for (int count : houseCount)
        cout << count << '\n';
}