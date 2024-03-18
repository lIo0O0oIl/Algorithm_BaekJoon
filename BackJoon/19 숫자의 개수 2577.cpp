// https://www.acmicpc.net/problem/2577

#include <iostream>
#include <string>
#include <map>
using namespace std;

int arr[11];

int main() {
	int a, b, c;
	string sum;
	map<char, int> map;
	cin >> a >> b >> c;
	sum = to_string(a * b * c);

	for (int i = 0; i < 10; i++)
	{
		map[i + '0'] = 0;
	}
	for (int i = 0; i < sum.size(); i++)
	{
		map[sum[i]]++;
	}

	for (auto i : map)
	{
		cout << i.second << '\n';
	}
}