// https://www.acmicpc.net/problem/32314

#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    
    if(n <= m / k)
        cout << "1";
    else
        cout << "0";
}