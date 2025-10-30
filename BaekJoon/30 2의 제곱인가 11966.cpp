// https://www.acmicpc.net/problem/11966

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int input, count = 0;
//	string answer = "";
//	cin >> input;
//	while (input != 0)
//	{
//		if (input % 2 == 1) answer += "1";
//		else answer += "0";
//		input /= 2;
//	}
//	for (int j = 0; j < answer.size(); j++)
//	{
//		if (answer[j] == '1') count++;
//	}
//	if (count == 1) cout << 1;
//	else cout << 0;
//}

#include <iostream>
using namespace std;

int main()
{
	int input;
	cin >> input;
	if ((input & (input - 1)) == 0) cout << 1;
	else cout << 0;
}