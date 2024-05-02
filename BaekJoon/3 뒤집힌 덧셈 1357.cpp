//https://www.acmicpc.net/problem/1357

#include <iostream>
#include <string>    
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    string s, s1, result;

    cin >> s >> s1;

    reverse(s.begin(), s.end());
    reverse(s1.begin(), s1.end());

    n = stoi(s);
    m = stoi(s1);

    result = to_string(n + m);
    reverse(result.begin(), result.end());

    cout << stoi(result) << endl;
}