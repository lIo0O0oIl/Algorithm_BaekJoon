#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, m;
    queue<int> apt;
    cin >> n >> m;
    
    for (int i = 0; i < n * 2; ++i)
    {
        int k;
        cin >> k;
        apt.push(k);
    }
    
    for (int i = 0; i < m; ++i)
    {
        int k, temp = 0;
        cin >> k;
        
        for (int j = 0; j < k; ++j)
        {
            temp = apt.front();
            if (j + 1 < k)
            {
                apt.pop();
                apt.push(temp);
            }
        }
        cout << temp << " ";
    }
}