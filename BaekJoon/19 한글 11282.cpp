// https://www.acmicpc.net/problem/11282

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	n += 3071;
	s.push_back(n / 4096 + 234);
	s.push_back(n / 64 % 64 + 128);
	s.push_back(n % 64 + 128);
	cout << s;
}

/*
�ѱ� UTF-8 ���ڵ� ��Ģ (�ѱ��� UTF-8 �ڵ�� 3Byte)
1. ù ��° ������ '��'�� UTF-8 �ڵ�� 0xEA, 0xB0, Ox80 (234, 176, 128)
2. ������ ������ '�R'�� UTF-8 �ڵ�� 

�̾ �����ϱ�!
https://ddmanager.pe.kr/150
*/