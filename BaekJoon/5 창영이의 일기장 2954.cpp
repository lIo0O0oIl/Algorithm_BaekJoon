// https://www.acmicpc.net/problem/2954

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string input;
//	bool is_vowel = false;
//	getline(cin, input);
//	for (int i = 0; i < input.size(); i++)
//	{
//		if (input[i] == 'a' || input[i] == 'e' ||
//			input[i] == 'i' || input[i] == 'o' ||
//			input[i] == 'u')
//		{
//			if (is_vowel == true)
//			{
//				is_vowel = false;
//				continue;
//			}
//			if (is_vowel == false) cout << input[i];
//			is_vowel = true;
//		}
//		else if (input[i] == 'p' && is_vowel) continue;
//		else if (input[i] == ' ')
//		{
//			is_vowel = false;
//			cout << input[i];
//		}
//		else cout << input[i];
//	}
//}

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	getline(cin, input);
	for (int i = 0; i < input.size(); i++)
	{
		cout << input[i];
		if (input[i] == 'a' || input[i] == 'e' ||
			input[i] == 'i' || input[i] == 'o' ||
			input[i] == 'u') i += 2;
	}
}