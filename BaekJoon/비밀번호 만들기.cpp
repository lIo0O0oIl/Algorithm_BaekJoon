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
			if (input1[i] == input2[j])		// 문자열이랑 같으면
			{
				if (map.find(input1[i]) != map.end())		// 이 문자열이 있는 문자열이라면
				{

				}
				map.insert({ input1[i], j });
				
			}
		}
	}
}

/*
2개의 맵이 있음 - 언오덜드맵
본래 있던 것인가. 있던 것인데 나와 두번째 문자열의 j 가 더 가깝다면 내것으로
해주고 나를 빼고 다시 넣어줌. 정렬을 위해서

중복이 되는 문자열은 어떻게 하지?

*/