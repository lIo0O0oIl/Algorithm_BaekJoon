// https://www.acmicpc.net/problem/15238

#include <iostream>
using namespace std; 

int main()
{
    int arr[27] = {};
    int t, big = 0;
    string input;
    char answer;

    cin >> t >> input;

    for (int i = 0; i < input.size(); i++)
    {
        arr[input[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > big)
        {
            big = arr[i];
            answer = i + 97;
        }
    }

    cout << answer << ' ' << big;
}