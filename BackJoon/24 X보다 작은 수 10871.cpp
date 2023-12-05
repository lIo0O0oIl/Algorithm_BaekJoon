// https://www.acmicpc.net/problem/10871

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, x, input;
	vector<int> v;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input < x) {
			v.push_back(input);
		}
	}
	for (auto i : v) {
		cout << i << " ";
	}
}