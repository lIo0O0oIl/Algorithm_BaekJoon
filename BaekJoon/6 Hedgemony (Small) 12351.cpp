// https://www.acmicpc.net/problem/12351

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	
	cout << fixed;
    cout.precision(6);
	
	for (int i = 0; i < t; ++i)
	{
		cin >> n;
		vector<float> vec(n);
		for (int j = 0; j < n; ++j)
		{
			cin >> vec[j];
		}
		for (int j = 1; j < n - 1; ++j)
		{
			float avg = (vec[j - 1] + vec[j + 1]) / 2.0f;
			if (vec[j] > avg) vec[j] = avg;
		}
		cout << "Case #" << i + 1 << ": " << vec[n - 2] << '\n';
	}
}
