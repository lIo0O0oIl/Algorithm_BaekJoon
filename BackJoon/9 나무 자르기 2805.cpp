// https://www.acmicpc.net/problem/2805

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;
int n, m;
long long vn, low, high, mid, total;			// mid = 절단기 높이
long long result;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> vn;
		v.push_back(vn);
	}

	//sort(v.begin(), v.end());
	// 1. 정렬해서 가장 뒤에 있는것
	// 2. 입력받으면서 가장 높은애를 저장하는
	low = 0;
	high = *max_element(v.begin(), v.end());			// 백터에서 가장 큰 값

	while (low <= high) {
		mid = (low + high) / 2;		// 잘려지는 길이
		total = 0;		// 잘려서 나온 나무의 길이

		for (int i = 0; i < v.size(); i++)
		{
			if ((v[i] - mid) <= 0) continue;
			total += v[i] - mid;		// 잘린 나무의 총 길이
		}

		// 이분탐색의 원리에 따라서
		// 큰 경우 아닌경우
		if (total < m) {		// 잘린게 구하려는 길이보다 작으면 높이를 줄여준다.
			high = mid - 1;
		}
		else {	// 길이가 충분하다
			result = mid;
			low = mid + 1;
		}

		if (total == m) {
			break;
		}
	}

	cout << result;
}