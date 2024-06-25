// https://www.acmicpc.net/problem/7568

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Human
{
	int x;
	int y;
};

bool operator>(Human& left, Human& right)		// 자기보다 키도 몸무게도 높아야함.
{
	if (left.x > right.x && left.y > right.y)
	{
		return true;
	}
	return false;
}

int main()
{
	int n;
	int x, y;
	vector<Human> vec;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		vec.push_back({ x, y});
	}
	for (int i = 0; i < n; i++)
	{
		int now = 1;
		for (int j = 0; j < n; j++)
		{
			if (j == i) continue;
			if (vec[j] > vec[i])
			{
				now++;
			}
		}
		cout << now << " ";
	}
}


/*
5
55 185
58 183
88 186
60 175
46 155

88 186		1	
60 175		2		
58 183		2		
55 185		2		
56 155		5


아 걍 통으로 브루트포스 하는거지!!!! 그래서 값 찾아주고

*/