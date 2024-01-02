https://www.acmicpc.net/submit/10989/64218336

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





// https://www.acmicpc.net/problem/10101

#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a == 60 && b == 60 && c == 60) // 세 각이 모두 60도 일 때
        cout << "Equilateral";
    else if (a + b + c == 180) {
        if (a == b || b == c || c == a)  // 세 각의 합이 180이면서 두 각이 같을때
            cout << "Isosceles";
        else if (a != b || b != c || c != a) // 세 각의 합이 180이면서 세 각이 다 다를때
            cout << "Scalene";
    }

    else  // 3각의 크기가 모두 다를때
        cout << "Error";

}