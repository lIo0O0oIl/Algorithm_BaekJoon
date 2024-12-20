// https://www.acmicpc.net/problem/11282

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	n += 3071;
	s.push_back(n / 4096 + 234);
	s.push_back(n / 64 % 64 + 128);
	s.push_back(n % 64 + 128);
	cout << s;
}

/*
ÇÑ±Û UTF-8 ÀÎÄÚµù ±ÔÄ¢ (ÇÑ±ÛÀÇ UTF-8 ÄÚµå´Â 3Byte)
1. Ã¹ ¹øÂ° ±ÛÀÚÀÎ '°¡'ÀÇ UTF-8 ÄÚµå´Â 0xEA, 0xB0, Ox80 (234, 176, 128)
2. ¸¶Áö¸· ±ÛÀÚÀÎ 'ÆR'ÀÇ UTF-8 ÄÚµå´Â 0x9E, 0xA3 (237, 158, 163)
3. ¸ðµç ÄÚµåÀÇ °ªÀº 0x80~0xBF (128~191) ¹üÀ§¿¡ ¼ÓÇÔ. (Ã¹¹ÙÀÌÆ®´Â ¿¹¿Ü, 0xEA)



ÀÌ¾î¼­ °øºÎÇÏ±â!
https://ddmanager.pe.kr/150
*/