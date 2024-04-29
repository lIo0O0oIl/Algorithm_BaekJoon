// https://www.acmicpc.net/problem/1427

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<char> vec;
    string input;
    cin >> input;
    for (int i = 0; i < input.size(); ++i)
    {
        vec.push_back(input[i]);
    }
    sort(vec.begin(), vec.end());
    for (int i = vec.size() - 1; i >= 0; --i)
    {
        cout << vec[i];
    }
}
