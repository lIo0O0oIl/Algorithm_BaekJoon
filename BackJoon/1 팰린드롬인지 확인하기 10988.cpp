// https://www.acmicpc.net/problem/10988

#include <iostream>
using namespace std;

int main() {
	string input;
	cin >> input;
	for (int i = 0; i < input.size() / 2; i++)
	{
		if (input[i] != input[(input.size() - 1) - i])		// µÚ¿¡²¨¶û °°ÀºÁö
		{
			cout << 0;
			return 0;
		}
	}
	cout << 1;
}