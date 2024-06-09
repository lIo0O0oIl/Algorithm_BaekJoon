// https://www.acmicpc.net/problem/1292

#include<iostream>
using namespace std;

int a, b, cnt;
int arr[1000];

int main()
{
    cin >> a >> b;
    for (int i = 1; cnt < 1000; i++) {
        for (int j = 0; j < i; j++) {
            arr[cnt++] = i;
            if (cnt == 1000)
                break;
        }
    }
    int sum = 0;
    for (int i = a - 1; i <= b - 1; i++) {
        sum += arr[i];
    }
    cout << sum << endl;
}