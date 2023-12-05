// https://www.acmicpc.net/problem/5524

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	string input;
	vector<string> human;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		human.push_back(input);
	}

	char temp;
	for (int i = 0; i < human.size(); i++)
	{
		for (int j = 0; j < human[i].size(); j++)
		{
			temp = tolower(human[i][j]);
			cout << temp;
		}
		cout << endl;
	}
}