// https://www.acmicpc.net/problem/2822

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int arr[8] = { 0, };
    int index[5] = { 0, };

    int score = 0;

    vector<int> v;

    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
        v.push_back(arr[i]);
    }

    sort(arr, arr + 8, greater<int>());

    for (int i = 0; i < 5; i++) {
        score += arr[i];

        int n = find(v.begin(), v.end(), arr[i]) - v.begin();
        index[i] = n + 1;
    }

    cout << score << endl;

    sort(index, index + 5);

    for (int i = 0; i < 5; i++) {
        cout << index[i] << " ";
    }
}