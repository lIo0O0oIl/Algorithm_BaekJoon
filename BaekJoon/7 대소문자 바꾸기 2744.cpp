// https://www.acmicpc.net/problem/2744

#include <iostream>
using namespace std;

int main()
{
	string a;
	cin >> a;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] > 90)		// 90보다 크면 소문자니까 대문자로 바꿔서 출력
		{
			cout << (char)(a[i] - 32);
		}
		else
		{
			cout << (char)(a[i] + 32);
		}
	}
}


// ??? 출력이 이상한데