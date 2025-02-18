// https://www.acmicpc.net/problem/24267

#include <iostream>
using namespace std;

int main() {
    long long n, sum = 0;

    cin >> n;
    for (long long i = 1; i <= n - 2; ++i) 
    {
        sum += i * (i + 1) / 2;
    }

    cout << sum << '\n' << 3;
}


/*
2-17 photo is bad..!!!!!! oh my god!!!
*/