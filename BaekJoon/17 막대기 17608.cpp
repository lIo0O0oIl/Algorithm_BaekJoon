// https://www.acmicpc.net/problem/17608

#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n, input, top, count = 1;
	stack<int> s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		s.push(input);
	}
	top = s.top();
	s.pop();
	while (!s.empty())
	{
		if (s.top() > top)
		{
			count++;
			top = s.top();
		}
		s.pop();
	}
	cout << count;
}