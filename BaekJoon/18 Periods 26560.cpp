// https://www.acmicpc.net/problem/26560

#include <iostream>
#include <string>
using namespace std; 

int main()
{
	int n;
	string input;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		getline(cin, input);
		if (input[input.size() - 1] != 46) cout << input << ".\n";
		else cout << input << '\n';
	}
}