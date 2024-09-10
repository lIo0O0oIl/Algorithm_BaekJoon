// https://www.acmicpc.net/problem/2789

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    string CAMBRIDGE = "CAMBRIDGE";

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < CAMBRIDGE.size(); j++) {
            if (s[i] == CAMBRIDGE[j])
                s[i] = 0;
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != 0)
            cout << s[i];
    }
}