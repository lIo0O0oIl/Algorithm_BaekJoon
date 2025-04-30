// https://www.acmicpc.net/problem/31009

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, price, jinju, expensive = 0;
	string input;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input >> price;
		if (input == "jinju") jinju = price;
		v.push_back(price);
	}
	for (int i = 0; i < n; i++)
	{
		if (v[i] > jinju) expensive++;
	}
	cout << jinju << '\n' << expensive;
}