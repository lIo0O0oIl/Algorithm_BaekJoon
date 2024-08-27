// https://www.acmicpc.net/problem/28290

#include <iostream>

#include <string>

using namespace std;

int main() {
    string S;

    cin >> S;

    if (S == "fdsajkl;" || S == "jkl;fdsa") {
        cout << "in-out" << endl;
    }
    else if (S == "asdf;lkj" || S == ";lkjasdf") {
        cout << "out-in" << endl;
    }
    else if (S == "asdfjkl;") {
        cout << "stairs" << endl;
    }
    else if (S == ";lkjfdsa") {
        cout << "reverse" << endl;
    }
    else {
        cout << "molu" << endl;
    }
}