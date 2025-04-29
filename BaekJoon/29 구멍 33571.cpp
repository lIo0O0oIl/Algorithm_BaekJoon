// https://www.acmicpc.net/problem/33571

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int answer = 0;
	string input;
	getline(cin, input);
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == 65 || input[i] == 97) answer++;
		else if (input[i] == 66) answer += 2;
		else if (input[i] == 98) answer++;
		else if (input[i] == 68 || input[i] == 100) answer++;
		else if (input[i] == 101) answer++;
		else if (input[i] == 103) answer++;
		else if (input[i] == 79 || input[i] == 111) answer++;
		else if (input[i] == 80 || input[i] == 112) answer++;
		else if (input[i] == 81 || input[i] == 113) answer++;
		else if (input[i] == 82) answer++;
		else if (input[i] == 64) answer++;
	}
	cout << answer;
}