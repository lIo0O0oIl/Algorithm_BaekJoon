// https://www.acmicpc.net/problem/13015

#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n;
	cin >> n;

	// 윗부분 출력
	for (int i = 0; i < n; i++) cout << '*';
	for (int i = 0; i < n * 2 - 3; i++) cout << ' ';
	for (int i = 0; i < n; i++) cout << '*';
	cout << '\n';

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < i + 1; j++) cout << ' ';
		cout << '*';
		for (int j = 0; j < n - 2; j++) cout << ' ';
		cout << '*';
		if (i != n - 2)
		{
			for (int j = 0; j < ((n - 2) * 2) - (i * 2) - 1; j++) cout << ' ';
			cout << '*';
		}
		for (int j = 0; j < n - 2; j++) cout << ' ';
		cout << '*' << '\n';
	}

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = 0; j < n - 2 - i; j++) cout << ' ';
		cout << '*';
		for (int j = 0; j < n - 2; j++) cout << ' ';
		cout << '*';
		for (int j = 0; j < 1 + (i * 2); j++) cout << ' ';
		cout << '*';
		for (int j = 0; j < n - 2; j++) cout << ' ';
		cout << '*' << '\n';
	}

	for (int i = 0; i < n; i++) cout << '*';
	for (int i = 0; i < n * 2 - 3; i++) cout << ' ';
	for (int i = 0; i < n; i++) cout << '*';
}


/*
1은 안 들어옴

2
** **
 ***
** **

3
***   ***
  * * * *
   * * *
  * * * *
***   ***

4
****     ****
 *  *    *  *
  *  * *  *
   *  *  *
  *  * *  *
 *  *   *  *
****     ****

5
*****       *****
 *   *     *   *
  *   *   *   *
   *   * *   *
	*   *   *
   *   * *   *
  *   *   *   *
 *   *     *   *
*****       *****



*/