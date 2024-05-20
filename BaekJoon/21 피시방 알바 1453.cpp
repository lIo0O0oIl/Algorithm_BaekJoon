// https://www.acmicpc.net/problem/1453

#include <iostream>
#include <set>
using namespace std;

int main() {
    int cnt = 0, n, input;
    set<int> set;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (set.find(input) != set.end()) cnt++;
        else set.insert(input);
    }

    cout << cnt;
}