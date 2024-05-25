// https://www.acmicpc.net/problem/31429

#include <iostream>
using namespace std;

int main()
{
    int n, cnt, score;
    cin >> n;

    switch (n)
    {
    case 1:
        cnt = 12;
        score = 1600;
        break;
    case 2:
        cnt = 11;
        score = 894;
        break;
    case 3:
        cnt = 11;
        score = 1327;
        break;
    case 4:
        cnt = 10;
        score = 1311;
        break;
    case 5:
        cnt = 9;
        score = 1004;
        break;
    case 6:
        cnt = 9;
        score = 1178;
        break;
    case 7:
        cnt = 9;
        score = 1357;
        break;
    case 8:
        cnt = 8;
        score = 837;
        break;
    case 9:
        cnt = 7;
        score = 1055;
        break;
    case 10:
        cnt = 6;
        score = 556;
        break;
    case 11:
        cnt = 6;
        score = 773;
        break;
    }

    cout << cnt << " " << score;
}