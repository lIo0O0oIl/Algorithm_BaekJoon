// https://www.acmicpc.net/problem/28074

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char word[5] = { 'M', 'O', 'B', 'I', 'S' };
    string s;

    cin >> s;

    for (int i = 0; i < 5; i++) {
        if (find(s.begin(), s.end(), word[i]) == s.end()) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}