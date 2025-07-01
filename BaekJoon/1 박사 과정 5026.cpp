// https://www.acmicpc.net/problem/5026

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string line;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(cin, line);
		if (line[0] == 'P') cout << "skipped\n";
		else
		{
			bool is_mark = false;
			string a = "", b = "";
			for (int i = 0; i < line.size(); i++)
			{
				if (line[i] == '+') is_mark = true;
				else if (!is_mark) a += line[i];
				else b += line[i];
			}
			cout << stoi(a) + stoi(b) << '\n';
		}
	}
}