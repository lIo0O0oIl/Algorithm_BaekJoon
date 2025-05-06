// https://www.acmicpc.net/problem/11531

#include <iostream>
#include <map>
using namespace std;

struct problem
{
	int time;
	int num;
};

int main()
{
	int m, answer = 0, penalty = 0;
	string name, result;
	map<string, problem> map;

	while (true)
	{
		cin >> m;
		if (m == -1) break;
		cin >> name >> result;
		map[name].time = m;
		if (result == "right")
		{
			penalty += map[name].time + map[name].num * 20;
			answer++;
		}
		map[name].num++;
	}
	cout << answer << '\n' << penalty;
}