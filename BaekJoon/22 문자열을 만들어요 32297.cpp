// https://www.acmicpc.net/problem/32297

#include <iostream>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n >> s;
	if (s.find("gori") != string::npos) cout << "YES";
	else cout << "NO";
}