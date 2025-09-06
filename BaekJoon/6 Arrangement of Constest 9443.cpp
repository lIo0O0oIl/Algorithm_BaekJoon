// https://www.acmicpc.net/problem/9443

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, answer = 0;
	char nowAlphabet = 'A';
	cin >> n;
	vector<string> vec(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < n; i++)
	{
		if (vec[i][0] == nowAlphabet)
		{
			nowAlphabet++;
			answer++;
		}
	}
	cout << answer;
}