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
			if (input1[i] == input2[j])		// 문자열이랑 같으면
			{
				yourIndex = j;
				if (is_find)		// 이 문자열이 있는 문자열이라면
				{
					if (abs(myIndex - yourIndex) < length)		// 거리가 지금 것보다 가깝다면
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
2개의 맵이 있음 - 언오덜드맵
본래 있던 것인가. 있던 것인데 나와 두번째 문자열의 j 가 더 가깝다면 내것으로
해주고 나를 빼고 다시 넣어줌. 정렬을 위해서

중복이 되는 문자열은 어떻게 하지?

인덱스 값을 가져와서 그걸 길이를 재주면서 판단함.

멀티맵을 써서 중복값도 더해서 사용을 해보자.


*/