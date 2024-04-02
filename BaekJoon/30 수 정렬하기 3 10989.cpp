// https://www.acmicpc.net/problem/10989

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int arr[10001] = { 0 }; // �迭 �ʱ�ȭ ���ְ�

    for (int i = 0; i < n; i++) { // n�� ���� �޾Ƽ�
        int a;
        cin >> a;
        arr[a] += 1; // �迭�� �ش��ϴ� �ε����� ������ ����
    }

    // �迭�� ���鼭 ������ŭ �ش� ���� ���
    for (int i = 1; i < 10001; i++) {
        for (int j = 0; j < arr[i]; j++) {
            cout << i << '\n'; // ���� �������� ���ĵ� ����� ���! 
        }
    }
}