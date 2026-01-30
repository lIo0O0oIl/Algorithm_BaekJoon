// https://www.acmicpc.net/board/view/85874

#include <iostream>
using namespace std;

int main()
{
	int p, q;
	cin >> p >> q;
	if (p <= 50 && q <= 10) cout << "White";
	else if (q > 30) cout << "Red";
	else cout << "Yellow";
}


/*
50명에 10명 이하면 하양
입원수가 30명보다 많으면 빨강
나머지는 모두 노랑
*/