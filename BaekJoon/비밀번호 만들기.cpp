// https://www.acmicpc.net/problem/17218

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
	multimap<char, int> multimap;

	string input1, input2;
	vector<pair<char, int>> vec;
	vector<pair<char, bool>> vec2;
	int myIndex = 0, yourIndex = 0, length = 0;
	bool is_find = false;

	cin >> input1 >> input2;
	
	for (int i = 0; i < input1.size(); i++)
	{
		myIndex = i;
		for (int j = 0; j < input2.size(); j++)
		{
			if (input1[i] == input2[j])		// ���ڿ��̶� ������
			{
				yourIndex = j;
				if (is_find)		// �� ���ڿ��� �ִ� ���ڿ��̶��
				{
					if (abs(myIndex - yourIndex) < length)		// �Ÿ��� ���� �ͺ��� �����ٸ�
					{
						//vec.erase({input1[i], });
					}
				}
				else
				{
					vec.push_back({ input1[i], j });
					is_find = true;
					length = abs(myIndex - yourIndex);
				}
			}
		}

	}
}

/*
2���� ���� ���� - ��������
���� �ִ� ���ΰ�. �ִ� ���ε� ���� �ι�° ���ڿ��� j �� �� �����ٸ� ��������
���ְ� ���� ���� �ٽ� �־���. ������ ���ؼ�

�ߺ��� �Ǵ� ���ڿ��� ��� ����?

�ε��� ���� �����ͼ� �װ� ���̸� ���ָ鼭 �Ǵ���.

��Ƽ���� �Ἥ �ߺ����� ���ؼ� ����� �غ���.


*/