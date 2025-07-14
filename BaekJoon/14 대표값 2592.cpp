// https://www.acmicpc.net/problem/2592

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	int input, big = 0, average = 0, bigNum;
	unordered_map<int, int> map;
	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		average += input;
		map[input]++;
	}
	cout << average / 10 << '\n';
	for (auto i : map)
	{
		if (i.second > big)
		{
			big = i.second;
			bigNum = i.first;
		}
	}
	cout << bigNum;
}