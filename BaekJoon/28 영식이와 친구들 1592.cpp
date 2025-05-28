// https://www.acmicpc.net/problem/1592

#include <iostream>
using namespace std;

int arr[51];

int main() {
    int n, m, l;
    cin >> n >> m >> l;

    int i = 1;  
    int cnt = -1;

    while (true) {
        arr[i]++;
        cnt++;

        if (arr[i] >= m) {
            break;
        }

        if (arr[i] % 2 == 0) {
            i -= l;
            if (i <= 0) {
                i += n;
            }
        }
        else {
            i = (i + l - 1) % n + 1;
        }
    }

    cout << cnt << '\n';
}

//#include <iostream>
//#include <map>
//using namespace std;
//
//int main()
//{
//	int n, m, l, now = 1, answer = 1;
//	map<int, int> map;
//	cin >> n >> m >> l;
//	for (int i = 1; i <= n; i++)
//	{
//		map[i] = 0;
//	}
//	map[1] = 1;
//	while (true)
//	{
//		if (map[now] == m)
//		{
//			break;
//		}
//		if (map[now] % 2 == 1)
//		{
//			now += l;
//			if (now > n) now -= n;
//		}
//		else
//		{
//			now -= l;
//			if (now <= 0) now = n - now;
//		}
//
//		map[now]++;
//		answer++;
//	}
//	cout << answer;
//}