// https://www.acmicpc.net/problem/17218

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	string input1, input2;
	unordered_map<char, int> map;
	cin >> input1 >> input2;
	for (int i = 0; i < input1.size(); i++)
	{
		for (int j = 0; j < input2.size(); j++)
		{
			if (input1[i] == input2[j])		// ���ڿ��̶� ������
			{
				if (map.find(input1[i]) != map.end())		// �� ���ڿ��� �ִ� ���ڿ��̶��
				{

				}
				map.insert({ input1[i], j });
				
			}
		}
	}
}

/*
2���� ���� ���� - ��������
���� �ִ� ���ΰ�. �ִ� ���ε� ���� �ι�° ���ڿ��� j �� �� �����ٸ� ��������
���ְ� ���� ���� �ٽ� �־���. ������ ���ؼ�

�ߺ��� �Ǵ� ���ڿ��� ��� ����?

*/