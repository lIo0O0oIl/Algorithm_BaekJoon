// https://www.acmicpc.net/problem/3447

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	while (getline(cin, input))
	{
		string temp = "";
		for (int i = 0; i < input.size(); i++)
		{
			temp += input[i];
			size_t pos = temp.find("BUG");		// int�� ������.
			if (pos != string::npos)
			{
				temp.erase(pos, 3);
			}
		}
		cout << temp << '\n';
	}
}