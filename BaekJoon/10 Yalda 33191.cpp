// https://www.acmicpc.net/problem/33191

#include <iostream>
using namespace std;

int main()
{
    int n, m, k, l;
    cin >> n;
    cin >> m >> k >> l;
    if (n >= m)
        cout << "Watermelon";
    else if (n >= k)
        cout << "Pomegranates";
    else if (n >= l)
        cout << "Nuts";
    else 
        cout << "Nothing";
}
