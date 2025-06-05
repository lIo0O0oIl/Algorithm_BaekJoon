// https://www.acmicpc.net/problem/12605

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n;
	string input;
	vector<string> v;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(cin, input);
		while (input.find(' ') != string::npos)
		{
			string sub = input.substr(0, input.find(' '));
			v.push_back(sub);
			input = input.substr(input.find(' ') + 1);
		}
		v.push_back(input);
		cout << "Case #" << i + 1 << ": ";
		for (int j = v.size() - 1; j >= 0; --j)
		{
			cout << v[j] << ' ';
		}
		cout << '\n';
		v.clear();
	}
}