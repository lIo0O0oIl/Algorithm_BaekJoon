// https://www.acmicpc.net/problem/2711

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int m;
        string s;
        cin >> m >> s;

        for (int i = 0; i < s.size(); i++) {
            if (i != m - 1)
                cout << s[i];
        }

        cout << endl;
    }
}