// https://www.acmicpc.net/problem/2851

#include <iostream>
using namespace std;

int main() {
    int arr[10], sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++) {
        int total = sum + arr[i];

        if (total >= 100) 
        {
            if (total - 100 <= 100 - sum)
            {
                cout << total;
            }
            else
            {
                cout << sum;
            }
            return 0;
        }
        sum = total;
    }
    cout << sum;
}