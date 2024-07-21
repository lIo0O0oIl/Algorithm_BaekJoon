// https://www.acmicpc.net/problem/3009

#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> x, y;
	int tempX, tempY;
	for (int i = 0; i < 3; i++)
	{
		cin >> tempX >> tempY;
		if (x.find(tempX) == x.end())		// 만약에 없으면 
		{
			x.insert(tempX);
		}
		else
		{
			x.erase(tempX);
		}
		if (y.find(tempY) == y.end())		// 만약에 없으면 
		{
			y.insert(tempY);
		}
		else
		{
			y.erase(tempY);
		}
	}
	for (auto it = x.begin(); it != x.end(); it++) {
		cout << *it << " ";
	}
	for (auto it = y.begin(); it != y.end(); it++) {
		cout << *it;
	}
}


/*
5 5
5 7
7 5




*/