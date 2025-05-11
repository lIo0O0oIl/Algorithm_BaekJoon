// https://www.acmicpc.net/problem/5576

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(int a, int b) {
	return a > b;
}

int main()
{
	int input;
	vector<int> w, k;
	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		w.push_back(input);
	}
	sort(w.begin(), w.end(), comp);
	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		k.push_back(input);
	}
	sort(k.begin(), k.end(), comp);
	cout << w[0] + w[1] + w[2] << ' ' <<
		k[0] + k[1] + k[2];
}