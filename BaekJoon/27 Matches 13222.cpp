// https://www.acmicpc.net/problem/13222

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float n, w, h, length;
	cin >> n >> w >> h;
	float hypotenuse = sqrt(pow(w, 2) + pow(h, 2));
	for (int i = 0; i < n; i++)
	{
		cin >> length;
		if (length <= hypotenuse) cout << "YES\n";
		else cout << "NO\n";
	}
}