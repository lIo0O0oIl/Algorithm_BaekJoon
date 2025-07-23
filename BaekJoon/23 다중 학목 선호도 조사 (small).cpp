// https://www.acmicpc.net/problem/25326

#include <iostream>
#include <vector>
using namespace std;

struct preference
{
	string subject;
	string fruit;
	string color;
};

bool qna(preference check, string a, string b, string c)
{
	if (check.subject != a && a != "-") return false;
	if (check.fruit != b && b != "-") return false;
	if (check.color != c && c != "-") return false;
	return true;
}

int main()
{
	int n, m, count = 0;
	string a, b, c;
	vector<preference> vec;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		preference temp;
		cin >> temp.subject >> temp.fruit >> temp.color;
		vec.push_back(temp);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		for (auto i : vec)
		{
			if (qna(i, a, b, c)) count++;
		}
		cout << count << '\n';
		count = 0;
	}
}