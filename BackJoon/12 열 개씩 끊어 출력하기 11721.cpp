// https://www.acmicpc.net/problem/11721

#include<iostream>
#include<string>
using namespace std;

int main() {
    string input;
    cin >> input;
    for (int i = 0; i < input.size(); i++) {
        cout << input[i];
        if ((i + 1) % 10 == 0) {        // ���� ���̰� 10 �̸�
            cout << '\n';
        }
    }
}