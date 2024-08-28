// https://www.acmicpc.net/problem/14491

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    stack<int> stack;
    cin >> n;

    while (n != 0)
    {
        stack.push(n % 9);
        n = n / 9;
    }

    while (!stack.empty())
    {
        cout << stack.top();
        stack.pop();
    }
}