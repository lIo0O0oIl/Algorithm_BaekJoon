#include <iostream>
using namespace std;

int main() {
	int aToz[27]({ 0 });
	string input, change = "";
	int iAnswer = 0;
	char cAnswer;
	bool notOne = false;
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		change += toupper(input[i]);
	}

	for (int i = 0; i < change.size(); i++)
	{
		aToz[change[i] - 65]++;
	}

	for (int i = 0; i < 27; i++)
	{
		if (aToz[i] > iAnswer) {
			iAnswer = aToz[i];
			cAnswer = i + 65;
			notOne = false;
		}
		else if (aToz[i] == iAnswer) {
			notOne = true;
		}
	}

	if (notOne) {
		cout << "?";
	}
	else {
		cout << cAnswer;
	}
}