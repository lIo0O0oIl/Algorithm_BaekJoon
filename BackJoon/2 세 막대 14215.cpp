#include <iostream>

using namespace std;

int main()
{
    int arr[3]; bool flag[3] = { false };
    int max = 0; int idx; int sum = 0;

    for (int i = 0; i < 3; ++i)
    {
        cin >> arr[i];
        if (arr[i] > max) { max = arr[i]; idx = i; } //가장 큰 길이와 인덱스 저장
    }
    flag[idx] = true; //위에서 저장한 인덱스에 해당하는 플래그를 true로 바꿈
    for (int i = 0; i < 3; ++i)
    {
        if (flag[i] == true) continue; //가장 큰 길이 제외
        else sum += arr[i]; //길이 합 저장
    }
    if (arr[idx] >= sum) arr[idx] = sum - 1; //삼각형 조건을 만족시키지 않는다면 강제로 만족시킴
    cout << sum + arr[idx];
}