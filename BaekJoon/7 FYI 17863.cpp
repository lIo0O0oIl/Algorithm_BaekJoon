//https://www.acmicpc.net/problem/17863

#include <iostream>
using namespace std;

int main()
{
	string n;
	cin >> n;
	if (n[0] == '5' && n[1]== '5' && n[2]== '5')
		cout << "YES";
	else cout << "NO";
}