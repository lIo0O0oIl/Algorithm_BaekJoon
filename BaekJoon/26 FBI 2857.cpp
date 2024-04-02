// https://www.acmicpc.net/problem/2857

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string input;
	bool FBI = false;
	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		if (input.find("FBI") != string::npos)
		{
			cout << i + 1 << " ";
			FBI = true;
		}
	}
	if (!FBI) cout << "HE GOT AWAY!";
}