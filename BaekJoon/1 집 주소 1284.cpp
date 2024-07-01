// https://www.acmicpc.net/problem/1284

#include <iostream>
using namespace std;

int main() {
    string s;

    while (true) {
        cin >> s;
        if (s == "0")
            return 0;

        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1')
                sum += 2;
            else if (s[i] == '0')
                sum += 4;
            else
                sum += 3;

            sum++;
        }
        cout << sum + 1 << endl;
    }
}