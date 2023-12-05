#include <iostream>
using namespace std;

int score[1001];

int main() {
	int n, big = 0, add = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> score[i];
		if (score[i] > big) {
			big = score[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		score[i] = score[i] / big * 100;
		add += score[i];
	}
	cout << add / n;
}