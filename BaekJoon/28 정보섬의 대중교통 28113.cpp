// https://www.acmicpc.net/problem/28113

#include <iostream>
using namespace std;

int main()
{
	int n, a, b;		// ����ö���� �ɾ�� �ð�, ����, ����ö
	cin >> n >> a >> b;

	if (a < b) cout << "Bus";
	else if (a > b) cout << "Subway";
	else cout << "Anything";
}