// https://www.acmicpc.net/problem/34813

#include <iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;
    if (input[0] == 'F') cout << "Foundation";
    else if (input[0] == 'C') cout << "Claves";
    else if (input[0] == 'V') cout << "Veritas";
    else if (input[0] == 'E') cout << "Exploration";
}