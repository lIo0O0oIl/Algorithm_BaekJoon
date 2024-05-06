//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    int sum = 0, check = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        sum += s[i] - '0';
        if (s[i] - '0' == 0) {
            check = 1;
        }
    }

    if (sum % 3 != 0 || check == 0) {
        cout << "-1";
        return 0;
    }

    sort(s.begin(), s.end(), greater<>());

    cout << s;
}