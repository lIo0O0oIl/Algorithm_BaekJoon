#include <iostream>
using namespace std;

int main() {
	bool student[29]{ false };
	for (int i = 0; i < 29; i++)
	{
		student[i] = false;
	}
	int num;
	for (int i = 0; i < 28; i++)
	{
		cin >> num;
		student[num - 1] = true;		// ³Í ³Â¾î
	}
	for (int i = 0; i < 28; i++)
	{
		if (student[i] == false) {
			cout << i + 1 << endl;
		}
	}
}