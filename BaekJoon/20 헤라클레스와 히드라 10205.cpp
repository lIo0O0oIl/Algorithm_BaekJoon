// https://www.acmicpc.net/problem/10205

#include <iostream>
using namespace std;

int main()
{
    int k, h;
    string input;
    cin >> k;
    for (int i = 0; i < k; ++i)
    {
        cin >> h >> input;
        cout << "Data Set " << i + 1 << ":\n";
        for (int j = 0; j < input.size(); ++j)
        {
            if (input[j] == 'c') h++;
            else if (input[j] == 'b') h--;
        }
        cout << h << "\n\n";
    }
}