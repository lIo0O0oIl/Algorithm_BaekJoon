// https://www.acmicpc.net/problem/25703

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << "int a;\nint *ptr = &a;\n";
	for (int i = 1; i < n; i++)
	{
		cout << "int ";
		for (int j = 0; j <= i; j++) cout << '*';
		if (i == 1) cout << "ptr" << i + 1 << " = " << "&ptr" << ";\n";
		else cout << "ptr" << i + 1 << " = " << "&ptr" << i << ";\n";
	}
}