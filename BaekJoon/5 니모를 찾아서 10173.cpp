// https://www.acmicpc.net/problem/10173

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string n;
	while (true)
	{
		getline(cin, n);
		if (n == "EOI") break;

		transform(n.begin(), n.end(), n.begin(), ::toupper);

		if (n.find("NEMO") != string::npos) cout << "Found\n";
		else cout << "Missing\n";
	}
}