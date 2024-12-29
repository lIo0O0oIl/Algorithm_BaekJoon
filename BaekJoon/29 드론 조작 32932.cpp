// https://www.acmicpc.net/problem/32932

#include <iostream>
#include<set>
using namespace std;

int main()
{
    int n, m;
    string command;
    
    set<pair<int, int>> obs;
    pair<int, int> pos;
    
    cin >> n >> m;
    pos = {0, 0};
    
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        obs.insert({x, y});
    }
    
    cin >> command;
    for (int i = 0; i < m; ++i)
    {
        switch (command[i])
        {
            case 'U':
                if (obs.find({pos.first, pos.second + 1}) == obs.end())
                    pos = {pos.first, pos.second + 1};
                break;
            case 'D':
                if (obs.find({pos.first, pos.second - 1}) == obs.end())
                    pos = {pos.first, pos.second - 1};
                break;
            case 'L':
                if (obs.find({pos.first - 1, pos.second}) == obs.end())
                    pos = {pos.first - 1, pos.second};
                break;
            case 'R':
                if (obs.find({pos.first + 1, pos.second}) == obs.end())
                    pos = {pos.first + 1, pos.second};
                break;
        }
    }
    
    cout << pos.first << " " << pos.second;
}