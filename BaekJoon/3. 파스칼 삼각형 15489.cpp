// https://www.acmicpc.net/problem/15489

#include <iostream>
using namespace std;

long long arr[31][31];

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr), cin.tie(nullptr);

	int r, c, w, cnt = 0;
	cin >> r >> c >> w;

	for (int i = 1; i <= 30; i++) {		// 0은 무시
		arr[i][1] = 1;
		arr[i][i] = 1;
	}

	for (int i = 3; i <= 30; i++) 		// 1, 2는 정해져있음.
	{
		for (int j = 2; j <= i - 1; j++)		// 다 가운데
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}

	int a = 0;
	for (int i = r; i < r + w; i++)		// 한 변이 포함하는 수의 개수. r 부터 시작해서 r + w 까지
	{
		for (int j = c; j <= c + a; j++)
		{
			//cout << arr[i][j] << " ";
			cnt += arr[i][j];
		}
		a++;
		//cout << endl;
	}

	cout << cnt;
}