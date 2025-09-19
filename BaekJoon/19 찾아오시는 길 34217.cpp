// https://www.acmicpc.net/problem/34217

#include <iostream>
using namespace std; 

int main()
{
	int a, aa, b, bb;
	cin >> a >> b >> aa >> bb;
	int aaa = a + aa;
	int bbb = b + bb;
	if (aaa == bbb) cout << "Either";
	else if (aaa < bbb) cout << "Hanyang Univ.";
	else cout << "Yongdap";
}