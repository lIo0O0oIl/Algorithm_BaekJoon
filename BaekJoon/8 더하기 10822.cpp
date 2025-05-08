// https://www.acmicpc.net/problem/10822

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int answer = 0;
	string s, temp;
	cin >> s;
    istringstream ss(s);
    vector<string> v;

    while (getline(ss, temp, ',')) {
        v.push_back(temp);
    }

    for (auto i : v)
    {
        answer += stoi(i);
    }
    cout << answer;
}