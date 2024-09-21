// https://www.acmicpc.net/problem/6778

#include <iostream>
using namespace std;

int main() {
    int n, eye;
    cin >> n >> eye;

    if (n >= 3 && eye <= 4)
        cout << "TroyMartian\n";
    if (n <= 6 && eye >= 2)
        cout << "VladSaturnian\n";
    if (n <= 2 && eye <= 3)
        cout << "GraemeMercurian\n";
}