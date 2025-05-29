// https://www.acmicpc.net/problem/10769

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int happy = 0, sad = 0;
	string input;
	int now = 0;
	getline(cin, input);
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == ':')
		{
			now = 1;
		}
		else if (input[i] == '-' && now == 1)
		{
			now = 2;
		}
		else if (now == 2)
		{
			if (input[i] == ')')happy++;
			else if (input[i] == '(') sad++;
			now = 0;
		}
		else now = 0;
	}
	if (happy == 0 && sad == 0) cout << "none";
	else if (happy == sad) cout << "unsure";
	else if (happy > sad) cout << "happy";
	else cout << "sad";
}