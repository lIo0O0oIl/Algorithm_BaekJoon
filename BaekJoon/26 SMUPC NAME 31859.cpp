// https://www.acmicpc.net/problem/31859

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	string name;
	string result = "";
	int number, trash = 0;
	set<char> alphabet;
	cin >> number >> name;

	for (int i = 0; i < name.size(); ++i)
	{
		if (alphabet.find(name[i]) == alphabet.end())		// 처음들어온 것이면
		{
			result += name[i];
			alphabet.insert(name[i]);
		}
		else
		{
			trash++;
		}
	}

	result += to_string(trash + 4);

	result = to_string(1906 + number) + result;

	cout << "smupc_";
	for (int i = result.size() - 1; i >= 0; --i)
	{
		cout << result[i];
	}
}