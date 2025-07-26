// https://www.acmicpc.net/problem/6784

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, count = 0;
	char temp;
	cin >> n;
	vector<char> vec(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp == vec[i]) count++;
	}
	cout << count;
}