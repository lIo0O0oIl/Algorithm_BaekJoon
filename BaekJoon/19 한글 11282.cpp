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
한글 UTF-8 인코딩 규칙 (한글의 UTF-8 코드는 3Byte)
1. 첫 번째 글자인 '가'의 UTF-8 코드는 0xEA, 0xB0, Ox80 (234, 176, 128)
2. 마지막 글자인 '힣'의 UTF-8 코드는 0x9E, 0xA3 (237, 158, 163)
3. 모든 코드의 값은 0x80~0xBF (128~191) 범위에 속함. (첫바이트는 예외, 0xEA)



이어서 공부하기!
https://ddmanager.pe.kr/150
*/