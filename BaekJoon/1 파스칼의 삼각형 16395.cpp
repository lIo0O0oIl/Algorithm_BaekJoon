// https://www.acmicpc.net/problem/16395

#include <iostream>
using namespace std;

long long arr[31][31];

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr), cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= 30; i++) {		// 0은 무시
		arr[i][1] = 1;
		arr[i][i] = 1;
	}		// 다 1로 만들고

	//for (int i = 1; i <= 30; i++){
	//	for (int j = 1; j <= i; j++){
	//		cout << arr[i][j];
	//	}
	//	cout << endl;
	//}

	for (int i = 3; i <= 30; i++) 		// 1, 2는 정해져있음.
	{
		for (int j = 2; j <= i - 1; j++)		// 다 가운데
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			//cout << arr[i][j] << " ";
		}
		//cout << endl;
	}

	cout << arr[n][k];
}