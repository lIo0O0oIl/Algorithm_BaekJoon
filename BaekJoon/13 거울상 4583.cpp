// https://www.acmicpc.net/problem/4583

#include <iostream>
using namespace std;

int main()
{
	string input, temp = "";
	bool is_ok = true;
	while (true)
	{
		cin >> input;
		if (input == "#") break;
		for (int i = 0; i < input.size(); i++)
		{
			switch (input[i])
			{
				case 'b': temp += 'd'; break;
				case 'd': temp += 'b'; break;
				case 'p': temp += 'q'; break;
				case 'q': temp += 'p'; break;
				case 'i': temp += 'i'; break;
				case 'o': temp += 'o'; break;
				case 'v': temp += 'v'; break;
				case 'w': temp += 'w'; break;
				case 'x': temp += 'x'; break;
				default:
					is_ok = false;
				break;
			}
		}
		if (is_ok)
		{
			for (int i = temp.size() - 1; i >= 0; --i)
			{
				cout << temp[i];
			}
			cout << '\n';
		}
		else cout << "INVALID\n";
		temp = "";
		is_ok = true;
	}
}