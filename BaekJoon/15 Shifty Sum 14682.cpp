// https://www.acmicpc.net/problem/14682

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;
	int k;
	long long answer = 0;
	cin >> n >> k;
	answer += stoi(n);
	for (int i = 0; i < k; i++)
	{
		n += '0';
		answer += stoi(n);
	}
	cout << answer;
}