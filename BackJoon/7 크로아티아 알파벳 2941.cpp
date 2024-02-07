// https://www.acmicpc.net/problem/2941

#include <iostream>
#include <string>
using namespace std;

int main() {
	string arr[8] = { "c=", "c-", "d-", "lj", "nj", "s=", "z=", "dz=" };
	string input;
	int count = 0;
	cin >> input;
	for (int i = 0; i < 8; i++)
	{
		if (input.find(arr[i]) != string::npos)
		{
			input.replace(input.find(arr[i]), arr[i].size(), "_");
			count++;
		}
	}
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] != '_') count++;
	}
	cout << count;
}