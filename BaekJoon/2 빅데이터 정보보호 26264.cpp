// https://www.acmicpc.net/problem/26264

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, b = 0, s = 0;
	string input;
	cin >> n >> input;
	for (int i = 0; i < input.size(); ++i)
	{
		if (input[i] == 's')
		{
			s++;
			i += 8;
		}
		else if (input[i] == 'b')
		{
			b++;
			i += 7;
		}
	}
	if (s == b) cout << "bigdata? security!";
	else if (b > s) cout << "bigdata?";
	else cout << cout << "security!";
}