// https://www.acmicpc.net/problem/19698

#include <iostream>
using namespace std;

int main()
{
    int n, w, h, l;
    cin >> n >> w >> h >> l;

    if (n <= (w / l) * (h / l))
        cout << n;
    else
        cout << (w / l) * (h / l);
}