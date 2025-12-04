// https://www.acmicpc.net/problem/34691

#include <iostream>
using namespace std;

int main()
{
	string input;
	while (true)
	{
		cin >> input;
		if (input == "end") break;
		else if (input == "animal") cout << "Panthera tigris\n";
		else if (input == "tree") cout << "Pinus densiflora\n";
		else if (input == "flower") cout << "Forsythia koreana\n";
	}
}