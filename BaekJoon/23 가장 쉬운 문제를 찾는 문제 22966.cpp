// https://www.acmicpc.net/problem/22966

#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int, string> map;
	int n, level;
	string name;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> level;
		map[level] = name;
	}
	auto iter = map.begin();
	//if (iter != map.end()) {}
	cout << iter->second;		// 무조껀 있음. 나중에는 사용 주의해야겠지만...
}