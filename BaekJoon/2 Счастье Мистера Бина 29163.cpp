// https://www.acmicpc.net/problem/29163

#include <iostream>
using namespace std;

int main() 
{
    int n, m;
    int even, odd;
    cin >> n;
    even = odd = 0;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> m;
        
        if (m % 2 == 0)
            even++;
        else
            odd++;
    }
    
    if (even > odd)
        cout << "Happy";
    else
        cout << "Sad";
}