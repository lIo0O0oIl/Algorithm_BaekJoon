// https://www.acmicpc.net/problem/1264

#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int cnt = 0;
	while (getline(cin, input))
	{
		if (input == "#") {
			break;
		}
		for (int i = 0; i < input.size(); i++)
		{
			if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u'
				|| input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U') {
				cnt++;
			}
		}
		cout << cnt << endl;
		cnt = 0;
	}
}