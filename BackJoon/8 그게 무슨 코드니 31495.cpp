// https://www.acmicpc.net/problem/31495

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    if ((input[0] == '\"' && input[input.size() - 1] == '\"') && input.size() != 1 && input.size() != 2)
    {
        for (int i = 1; i < input.size() - 1; i++)
        {
            cout << input[i];
        }
    }
    else
    {
        cout << "CE";
    }
}