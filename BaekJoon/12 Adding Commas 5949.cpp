// https://www.acmicpc.net/problem/5949

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string n;
	int count = 0;
	vector<char> commas;
	cin >> n;
	for (int i = n.size() - 1; i >= 0; --i)
	{
		commas.push_back(n[i]);
		count++;
		if (count >= 3 && i != 0)
		{
			commas.push_back(',');
			count = 0;
		}
	}
	for (int i = commas.size() - 1; i >= 0; --i)
	{
		cout << commas[i];
	}
}