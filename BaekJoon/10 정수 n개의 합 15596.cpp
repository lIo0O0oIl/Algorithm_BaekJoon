// https://www.acmicpc.net/problem/15596

#include <vector>
using namespace std;

long long sum(vector<int>& v) {
    long long result = 0;

    for (int i = 0; i < v.size(); i++) {
        result += v[i];
    }
    return result;
}