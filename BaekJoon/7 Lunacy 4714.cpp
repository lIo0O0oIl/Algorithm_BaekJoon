// https://www.acmicpc.net/problem/4714

#include <iostream>
using namespace std;

int main()
{
    float n;
    cout << fixed;
    cout.precision(2);

    while (true)
    {
        cin >> n;
        if (n == -1.0f) break;

        cout << "Objects weighing " << n << " on Earth will weigh " << n * 0.167 << " on the moon." << endl;
    }
}