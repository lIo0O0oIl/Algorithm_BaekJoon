// https://www.acmicpc.net/problem/17413

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
			cout << input[i];
			continue;
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


/*
baekjoon online judge
noojkeab enilno egduj
 
<ab cd>ef gh<ij kl>
<ab cd>fe hg<ij kl>

one1 two2 three3 4fourr 5five 6six
1eno 2owt 3eerht rruof4 evif5 xis6

<int><max>2147483647<long long><max>9223372036854775807
<int><max>7463847412<long long><max>7085774586302733229

<problem>17413<is hardest>problem ever<end>
<problem>31471<is hardest>melborp reve<end>

<   space   >space space space<    spa   c e>
<   space   >ecaps ecaps ecaps<    spa   c e>
*/