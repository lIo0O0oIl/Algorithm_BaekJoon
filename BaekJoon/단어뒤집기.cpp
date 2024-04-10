#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	string input;
	stack<char> s;
	bool is_arrow = false;

	getline(cin, input);

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == '<')
		{
			while (!s.empty())
			{
				cout << s.top();
				s.pop();
			}
			is_arrow = true;
		}
		if (input[i] == '>')
		{
			is_arrow = false;
			cout << input[i];
			continue;
		}
		if (is_arrow == false && input[i] == ' ')
		{
			while (!s.empty())
			{
				cout << s.top();
				s.pop();
			}
		}

		if (is_arrow)
		{
			cout << input[i];
		}
		else
		{
			s.push(input[i]);
		}
	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}