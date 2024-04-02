// https://www.acmicpc.net/problem/10989

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int arr[10001] = { 0 }; // 배열 초기화 해주고

    for (int i = 0; i < n; i++) { // n개 까지 받아서
        int a;
        cin >> a;
        arr[a] += 1; // 배열에 해당하는 인덱스에 개수를 누적
    }

    // 배열을 돌면서 개수만큼 해당 수를 출력
    for (int i = 1; i < 10001; i++) {
        for (int j = 0; j < arr[i]; j++) {
            cout << i << '\n'; // 오름 차순으로 정렬된 결과를 출력! 
        }
    }
}