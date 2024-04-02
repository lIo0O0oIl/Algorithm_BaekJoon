// https://www.acmicpc.net/problem/2083

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age, weight;

    while (true) {
        cin >> name >> age >> weight;

        if (name == "#" && age == 0 && weight == 0)
            break;
        if (age > 17 || weight >= 80)
            cout << name << " Senior" << '\n';
        else
            cout << name << " Junior" << '\n';
    }
}