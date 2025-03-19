// https://www.acmicpc.net/problem/32969

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    if (input.find("social") != string::npos || input.find("history") != string::npos
    || input.find("language") != string::npos || input.find("literacy") != string::npos)
    {
        cout << "digital humanities";
    }
    else if (input.find("bigdata") != string::npos || input.find("public") != string::npos
    || input.find("society") != string::npos)
    {
        cout << "public bigdata";
    }
}

// digital humanities = social, history, language, literacy
// public bigdata = bigdata, public, society
