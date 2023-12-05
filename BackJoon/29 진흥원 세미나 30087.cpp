// https://www.acmicpc.net/problem/30087

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string input;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input == "Algorithm") {
			cout << "204";
		}
		else if (input == "DataAnalysis") {
			cout << "207";
		}
		else if (input == "ArtificialIntelligence") {
			cout << "302";
		}
		else if (input == "CyberSecurity") {
			cout << "B101";
		}
		else if (input == "Network") {
			cout << "303";
		}
		else if (input == "Startup") {
			cout << "501";
		}
		else if (input == "TestStrategy") {
			cout << "105";
		}
		cout << endl;
	}
}