// https://www.acmicpc.net/problem/17219

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n, m;
	string site, password;
	unordered_map<string, string> map;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> site >> password;
		map.insert({ site, password });
	}

	for (int i = 0; i < m; i++)
	{
		cin >> site;
		cout << (map.find(site))->second << '\n';
	}
}