// https://www.acmicpc.net/problem/2744

#include <iostream>
using namespace std;

int main()
{
	string a;
	cin >> a;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] > 90)		// 90���� ũ�� �ҹ��ڴϱ� �빮�ڷ� �ٲ㼭 ���
		{
			cout << (char)(a[i] - 32);
		}
		else
		{
			cout << (char)(a[i] + 32);
		}
	}
}


// ??? ����� �̻��ѵ�