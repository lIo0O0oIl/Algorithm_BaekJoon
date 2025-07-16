// https://www.acmicpc.net/problem/2386

#include <iostream>
#include <string>
using namespace std;

int main()
{
	char alphabet;
	string sentence;
	int count = 0;
	while (true)
	{
		cin >> alphabet;
		if (alphabet == '#') break;
		cin.ignore();
		getline(cin, sentence);
		for (int i = 0; i < sentence.size(); i++)
		{
			if (sentence[i] == alphabet || sentence[i] == char(alphabet - 32))
			{
				count++;
			}
		}
		cout << alphabet << ' ' << count << '\n';
		count = 0;
	}
}