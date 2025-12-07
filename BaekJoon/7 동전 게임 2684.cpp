// https://www.acmicpc.net/problem/2684

#include <iostream>
using namespace std;

int main()
{
	int t, hhh = 0, hht = 0, hth = 0, htt = 0, thh = 0,
		tht = 0, tth = 0, ttt = 0;
	string input;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> input;
		for (int j = 0; j < input.size() - 2; j++)
		{
			string temp = "";
			temp += input[j];
			temp += input[j + 1];
			temp += +input[j + 2];

			if (temp == "HHH") hhh++;
			else if (temp == "HHT") hht++;
			else if (temp == "HTH") hth++;
			else if (temp == "HTT") htt++;
			else if (temp == "THH") thh++;
			else if (temp == "THT") tht++;
			else if (temp == "TTH") tth++;
			else if (temp == "TTT") ttt++;
		}
		cout << ttt << ' ' << tth << ' ' << tht << ' ' <<
			thh << ' ' << htt << ' ' << hth << ' ' << hht
			<< ' ' << hhh << '\n';
		hhh = 0; hht = 0; hth = 0; htt = 0; thh = 0;
		tht = 0; tth = 0; ttt = 0;
	}
}


/*
문자열보다는 숫자로 하는게 좋았겠다.
각 숫자에 자리값을 더해서 9번째를 만들어서
첫번째에 1
두번째에 2
세번째에 3

뒤뒤뒤 -6
뒤뒤앞 0
뒤앞뒤 -2
뒤앞앞 4

앞뒤뒤 -4
앞뒤앞 2
앞앞뒤 0
앞앞앞 6

아쉬 0이 두번나오네 글네. 이런거만 처리해주면?
*/