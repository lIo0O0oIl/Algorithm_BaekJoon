// https://www.acmicpc.net/problem/30033 

#include <iostream>
#include <vector>
using namespace std; 

int main()
{
int n, temp, answer = 0;
cin >> n;
vector<int> v(n);
for (int i = 0; i < n; i++)
{
cin >> v[i];
}
for (int i = 0; i < n; i++)
{
cin >> temp;
if (temp >= v[i]) answer++;
}
cout << answer;
}