//https://www.acmicpc.net/problem/26068

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, res;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;
        int m = s.length();
        if (stoi(s.substr(2, m - 2)) <= 90)
            res++;
    }

    cout << res;
}