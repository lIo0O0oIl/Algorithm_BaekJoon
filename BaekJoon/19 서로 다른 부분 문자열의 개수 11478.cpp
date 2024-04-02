// https://www.acmicpc.net/problem/11478

#include <iostream>
#include <set>
using namespace std;

int main() {
	string input, made = "";
	set<string> set;
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		for (int j = i; j < input.size(); j++)
		{
			made += input[j];
			set.insert(made);
		}
		made = "";
	}
	cout << set.size();
}