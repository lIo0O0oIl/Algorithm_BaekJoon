// https://www.acmicpc.net/problem/6321

#include <iostream>
using namespace std;

int main()
{
	int n;
	string input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		cout << "String #" << i + 1 << '\n';
		for (int j = 0; j < input.size(); j++)
		{
			if (input[j] == 'Z')
			{
				cout << 'A';
				continue;
			}
			cout << (char)(input[j] + 1);
		}
		cout << "\n\n";
	}
}