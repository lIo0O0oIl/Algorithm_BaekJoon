// https://www.acmicpc.net/problem/3181

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input, temp = "";
	int count = 0;
	getline(cin, input);
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == ' ')
		{
			if (temp != "i" && temp != "pa" && temp != "te" &&
				temp != "ni" && temp != "niti" && temp != "a" &&
				temp != "ali" && temp != "nego" && temp != "no" &&
				temp != "ili")
			{
				cout << char(temp[0] - 32);
			}
			else
			{
				if (count == 0) cout << char(temp[0] - 32);
			}
			temp = "";
			count++;
			continue;
		}
		temp += input[i];
	}
	if (temp != "i" && temp != "pa" && temp != "te" &&
		temp != "ni" && temp != "niti" && temp != "a" &&
		temp != "ali" && temp != "nego" && temp != "no" &&
		temp != "ili")
	{
		cout << char(temp[0] - 32);
	}
}