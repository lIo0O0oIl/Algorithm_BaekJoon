// https://www.acmicpc.net/problem/2941

#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string arr[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string input, now = "";
	int count = 0;
	cin >> input;
	for (int i = 0; i < input.size() - 1; i++)
	{
		now = input[i];
		now += input[i + 1];
		now += input[i + 2];

		for (int j = 0; j < 8; j++)
		{
			if (now.find(arr[j]) != string::npos)
			{
				input.replace(input.find(arr[j]), arr[j].size(), "_");
				count++;
				break;
			}
		}
	}
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] != '_') count++;
	}
	cout << count;
}

/*
c=
c-
d-
lj
nj
s=
z=
dz=
*/