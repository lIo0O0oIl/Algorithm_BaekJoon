// https://www.acmicpc.net/problem/10026

#include <iostream>
#include <queue>
using namespace std;

char picture[101][101];
int visited1[101][101], visited2[101][101];
int n, own = 0, two = 0;
queue<pair<int, int>> q1, q2;

int mx[4] = {1, -1, 0, 0};
int my[4] = {0, 0, 1, -1};

void bfs1(int y, int x)
{
    own++;
    q1.push({y, x});
    while(!q1.empty())
    {
        int i = q1.front().first;
        int j = q1.front().second;
        q1.pop();
        
        for (int k = 0; k < 4; ++k)
        {
            int nx = j + mx[k];
            int ny = i + my[k];
            
            if (nx < 0 || nx > n || ny < 0 || ny > n) continue;
            
            if (picture[i][j] == picture[ny][nx] && visited1[ny][nx] == 0)
            {
                visited1[ny][nx] = 1;
                q1.push({ny, nx});
            }
        }
    }
}

void bfs2(int y, int x)
{
    two++;
    q2.push({y, x});
    while(!q2.empty())
    {
        int i = q2.front().first;
        int j = q2.front().second;
        q2.pop();
        
        for (int k = 0; k < 4; ++k)
        {
            int nx = j + mx[k];
            int ny = i + my[k];
            
            if (nx < 0 || nx > n || ny < 0 || ny > n) continue;
            
            if (((picture[i][j] == picture[ny][nx])
                || (picture[i][j] == 'R' && picture[ny][nx] == 'G')
                    || (picture[i][j] == 'G' && picture[ny][nx] == 'R'))
                    && visited2[ny][nx] == 0)
            {
                visited2[ny][nx] = 1;
                q2.push({ny, nx});
            }
        }
    }
}

int main()
{
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> picture[i][j];
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (visited1[i][j] == 0)
            {
                bfs1(i, j);
            }
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (visited2[i][j] == 0)
            {
                bfs2(i, j);
            }
        }
    }
    
    cout << own << ' ' << two;
}
