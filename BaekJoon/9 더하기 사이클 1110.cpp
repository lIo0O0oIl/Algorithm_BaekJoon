// https://www.acmicpc.net/problem/1110

#include <iostream>
#include <string>
using namespace std; 

int main()
{
    string n, temp;
    int count = 0;
    cin >> n;
    if (n.size() == 1) n += '0';
    temp = n;

    while (true)
    {
    char left = temp[1];
    temp = to_string(temp[0] - '0' + temp[1] - '0');

    if (temp.size() == 1) temp = left + temp;
    else temp[0] = left;

    count++;
    if (temp == n) break;
    }

    cout << count;
}