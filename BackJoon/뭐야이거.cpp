https://www.acmicpc.net/submit/10989/64218336

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





// https://www.acmicpc.net/problem/10101

#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a == 60 && b == 60 && c == 60) // �� ���� ��� 60�� �� ��
        cout << "Equilateral";
    else if (a + b + c == 180) {
        if (a == b || b == c || c == a)  // �� ���� ���� 180�̸鼭 �� ���� ������
            cout << "Isosceles";
        else if (a != b || b != c || c != a) // �� ���� ���� 180�̸鼭 �� ���� �� �ٸ���
            cout << "Scalene";
    }

    else  // 3���� ũ�Ⱑ ��� �ٸ���
        cout << "Error";

}