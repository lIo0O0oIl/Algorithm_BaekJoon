// https://www.acmicpc.net/problem/32978

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    string input;
    set<string> s;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        s.insert(input);
    }
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> input;
        if (s.find(input) != s.end()) s.erase(input); 
    }
    for (auto i : s)
    {
        cout << i;
    }
}
