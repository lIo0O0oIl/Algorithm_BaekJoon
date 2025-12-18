// https://www.acmicpc.net/problem/11104

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, answer = 0;
    string n;
    cin >> t;
    for (int i = 0; i< t; ++i)
    {
        cin >> n;
        for (int j = 0; j< n.size(); ++j)
        {
            if (n[j] == '1')
            {
            answer += pow(2, n.size() - j - 1);
            }
        }
        cout << answer << '\n';
        answer = 0;
    }
}