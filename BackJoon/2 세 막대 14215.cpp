#include <iostream>

using namespace std;

int main()
{
    int arr[3]; bool flag[3] = { false };
    int max = 0; int idx; int sum = 0;

    for (int i = 0; i < 3; ++i)
    {
        cin >> arr[i];
        if (arr[i] > max) { max = arr[i]; idx = i; } //���� ū ���̿� �ε��� ����
    }
    flag[idx] = true; //������ ������ �ε����� �ش��ϴ� �÷��׸� true�� �ٲ�
    for (int i = 0; i < 3; ++i)
    {
        if (flag[i] == true) continue; //���� ū ���� ����
        else sum += arr[i]; //���� �� ����
    }
    if (arr[idx] >= sum) arr[idx] = sum - 1; //�ﰢ�� ������ ������Ű�� �ʴ´ٸ� ������ ������Ŵ
    cout << sum + arr[idx];
}