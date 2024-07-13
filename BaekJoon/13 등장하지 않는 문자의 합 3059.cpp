// https://www.acmicpc.net/problem/3059

#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {

        string s;
        cin >> s;

        int arr[26] = { 0 };
        int cnt = 0;

        for (int i = 0; i < s.size(); i++) {
            cnt = s[i] - 65;
            arr[cnt]++;
        }

        int sum = 0;

        for (int i = 0; i < 26; i++) {
            if (arr[i] == 0) {
                sum += i + 65;
            }
        }
        cout << sum << endl;
    }
}