// https://www.acmicpc.net/problem/28927

#include <iostream>
using namespace std;

int main()
{
    int n, m, k, max, mel;

    cin >> n >> m >> k;
    max = n * 3 + m * 20 + k * 120;

    cin >> n >> m >> k;
    mel = n * 3 + m * 20 + k * 120;

    if (max > mel)
        cout << "Max";
    else if (mel > max)
        cout << "Mel";
    else
        cout << "Draw";
}