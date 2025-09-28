// https://www.acmicpc.net/problem/11319

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, consonants = 0, vowels = 0;
	string input;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(cin, input);
		for (int j = 0; j < input.size(); j++)
		{
			if (input[j] == 'A' || input[j] == 'a') vowels++;
			else if (input[j] == 'E' || input[j] == 'e') vowels++;
			else if (input[j] == 'I' || input[j] == 'i') vowels++;
			else if (input[j] == 'O' || input[j] == 'o') vowels++;
			else if (input[j] == 'U' || input[j] == 'u') vowels++;
			else if (input[j] != ' ') consonants++;
		}
		cout << consonants << ' ' << vowels << '\n';
		consonants = 0;
		vowels = 0;
	}
}