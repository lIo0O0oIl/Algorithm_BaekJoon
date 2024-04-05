// https://www.acmicpc.net/problem/1476

#include <iostream>
using namespace std;

int main(void)
{
    int e, s, m, res = 0;
    int E = 0, S = 0, M = 0;
    cin >> e >> s >> m;

    while (true) {
        E++; S++; M++; res++;

        if (E == e && S == s && M == m) {
            cout << res;
            return 0;
        }

        if (E == 15)
            E = 0;
        if (S == 28)
            S = 0;
        if (M == 19)
            M = 0;
    }
}