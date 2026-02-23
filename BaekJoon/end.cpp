// 마지막 백준. 777.

// 17일 브론즈5 문제 하나 풀었었음

// 18일 풂
// https://www.acmicpc.net/problem/23235

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int count = 1;
//	string n;
//	while (true)
//	{
//		getline(cin, n);
//		if (n == "0") break;
//		cout << "Case " << count << ": Sorting... done!\n";
//		count++;
//	}
//}

// 19일
// https://www.acmicpc.net/problem/33179
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, temp, count = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		count += temp / 2 + temp % 2;
//	}
//	cout << count;
//}


// 20일
// ? 브론즈 5 였는디...

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n, d, all = 0;
//	cin >> n >> d;
//	vector<int> arr(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//		all += arr[i];
//	}
//	int price = d / all;
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] * price << '\n';
//	}
//}


// 21일
// https://www.acmicpc.net/problem/35277

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << n / 2000;
//}


// 22일
// https://www.acmicpc.net/problem/34236

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> arr(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	cout << arr[n - 1] + (arr[1] - arr[0]);
//}


// https://www.acmicpc.net/problem/34823

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int y, c, p;
//	cin >> y >> c >> p;
//	cout << min({ y, c / 2, p });
//}