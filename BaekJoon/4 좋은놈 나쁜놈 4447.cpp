// https://www.acmicpc.net/problem/4447

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, b = 0, g = 0;
	string name;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(cin, name);
		for (int j = 0; j < name.size(); j++)
		{
			if (name[j] == 'g') g++;
			else if (name[j] == 'G') g++;
			else if (name[j] == 'b') b++;
			else if (name[j] == 'B') b++;
		}
		if (g == b) cout << name << " is " << "NEUTRAL\n";
		else if (g > b) cout << name << " is " << "GOOD\n";
		else cout << name << " is " << "A BADDY\n";
		g = 0;
		b = 0;
	}
}