// https://www.acmicpc.net/problem/10867

#include <iostream>
#include <set>
using namespace std;

int main() {
	int n, input;
	set<int> set;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		set.insert(input);
	}
	for (auto i : set)
	{
		cout << i << " ";
	}
}