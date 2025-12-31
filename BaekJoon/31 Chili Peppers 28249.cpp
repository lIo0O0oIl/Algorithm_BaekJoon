// https://www.acmicpc.net/problem/28249

#include <iostream>
using namespace std;

int main()
{
    int n, score = 0;
    string input;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        if (input == "Poblano") score += 1500;
        else if (input == "Mirasol") score += 6000;
        else if (input == "Serrano") score += 15500;
        else if (input == "Cayenne") score += 40000;
        else if (input == "Thai") score += 75000;
        else if (input == "Habanero") score += 125000;
    }
    cout << score;
}