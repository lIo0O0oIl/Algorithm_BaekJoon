// https://www.acmicpc.net/problem/3058

#include <iostream>
using namespace std;

int main() {
    int n, sum, min;
    int arr[7];

    cin >> n;

    while (n--) {
        sum = 0;

        min = 100;

        for (int i = 0; i < 7; i++)
        {
            cin >> arr[i];

            if (arr[i] % 2 == 0)
            {
                sum += arr[i];

                if (arr[i] < min)
                    min = arr[i];
            }
        }

        cout << sum << ' ' << min << endl;
    }
}