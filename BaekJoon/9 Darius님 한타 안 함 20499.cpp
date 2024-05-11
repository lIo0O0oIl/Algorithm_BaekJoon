// https://www.acmicpc.net/problem/20499

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
	string input, temp;
	vector<int> vec;
	cin >> input;
	istringstream ss1(input);
	while (getline(ss1, temp, '/'))
	{
		vec.push_back(atoi(temp.c_str()));
	}
	if (vec[0] + vec[2] < vec[1] || vec[1] == 0) cout << "hasu";
	else cout << "gosu";
}