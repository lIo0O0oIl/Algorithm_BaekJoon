// https://www.acmicpc.net/problem/30802

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long n, input, t, p, shirts, pens, pen, total;
	t = p = shirts = pens = pen = total = 0;
	vector<long long> vec;
	cin >> n;
	for (long long i = 0; i < 6; i++)
	{
		cin >> input;
		vec.push_back(input);
	}
	cin >> t >> p;
	for (long long i = 0; i < vec.size(); i++)
	{
		shirts += vec[i] / t;
		if (vec[i] % t != 0)
		{
			shirts++;
		}
	}
	pen += n / p;
	if (n % p != 0)
	{
		pens += n % p;
	}
	cout << shirts << '\n' << pen << " " << pens;
}