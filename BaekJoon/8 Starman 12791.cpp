// https://www.acmicpc.net/problem/12791

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	map<int, vector<string>> m =
	{
		{1967, {"DavidBowie"}},
		{1969, {"SpaceOddity"}},
		{1970, {"TheManWhoSoldTheWorld"}},
		{1971, {"HunkyDory"}},
		{1972, {"TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars"}},
		{1973, {"AladdinSane", "PinUps"}},
		{1974, {"DiamondDogs"}},
		{1975, {"YoungAmericans"}},
		{1976, {"StationToStation"}},
		{1977, {"Low", "Heroes"}},
		{1979, {"Lodger"}},
		{1980, {"ScaryMonstersAndSuperCreeps"}},
		{1983, {"LetsDance"}},
		{1984, {"Tonight"}},
		{1987, {"NeverLetMeDown"}},
		{1993, {"BlackTieWhiteNoise"}},
		{1995, {"1.Outside"}},
		{1997, {"Earthling"}},
		{1999, {"Hours"}},
		{2002, {"Heathen"}},
		{2003, {"Reality"}},
		{2013, {"TheNextDay"}},
		{2016, {"BlackStar"}}
	};

	int q, input1, input2, count = 0;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> input1 >> input2;
		for (int j = input1; j <= input2; j++)
		{
			count += m[j].size();
		}
		cout << count << '\n';
		count = 0;
		for (int j = input1; j <= input2; j++)
		{
			for (auto name : m[j])
			{
				cout << j << ' ' << name << '\n';
			}
		}
	}
}