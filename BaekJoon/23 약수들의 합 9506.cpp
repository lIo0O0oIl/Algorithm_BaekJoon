// https://www.acmicpc.net/problem/9506

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int input, total = 0;
	vector<int> vec;
	while (true)
	{
		cin >> input;
		if (input == -1) break;
		for (int j = 1; j < input; j++)
		{
			if (input % j == 0)
			{
				vec.push_back(j);
			}
		}

		for (int j = 0; j < vec.size(); j++)
		{
			total += vec[j];
		}

		if (total == input)
		{
			cout << input << " = ";
			for (int j = 0; j < vec.size(); j++)
			{
				cout << vec[j];
				if (j < vec.size() - 1)
				{
					cout << " + ";
				}
			}
		}
		else
		{
			cout << input << " is NOT perfect.";
		}

		cout << '\n';
		total = 0;
		vec.clear();
	}
}