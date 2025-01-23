// https://www.acmicpc.net/problem/29731

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	set<string> set{"Never gonna give you up", "Never gonna let you down",
		"Never gonna run around and desert you", "Never gonna make you cry",
	"Never gonna say goodbye", "Never gonna tell a lie and hurt you",
	"Never gonna stop"};
	int n;
	bool is_ok = true;
	string input;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++)
	{
		getline(cin, input);
		if (set.find(input) == set.end())
		{
			is_ok = false;
		}
	}
	cout << (is_ok == false ? "Yes" : "No");
}