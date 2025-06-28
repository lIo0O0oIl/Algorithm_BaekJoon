// https://www.acmicpc.net/problem/7600

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	string input;
	set<char> set;
	while (true)
	{
		getline(cin, input);
		if (input == "#") break;
		for (int i = 0; i < input.size(); i++)
		{
			if (input[i] >= 65 && input[i] <= 90)
			{
				set.insert(input[i] + 32);
			}
			if (input[i] >= 97 && input[i] <= 122)
			{

				set.insert(input[i]);
			}
		}
		cout << set.size() << '\n';
		set.clear();
	}
}