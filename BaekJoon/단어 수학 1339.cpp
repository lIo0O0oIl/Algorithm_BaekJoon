// https://www.acmicpc.net/problem/1339

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n, now = 9;
    vector<string> vec;
    unordered_map<string, int> map;
    string input, temp = "";
    long long result  = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        vec.push_back(input);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vec[j].size() >= i)     // 지금 인덱스보다 크고
            {
                char ch[1];
                ch[0] = vec[j][i];
                string temp(ch);
                if (map.find(temp) == map.end())       // 이게 지금 들어있지 않으면
                {
                    map.insert({ temp, now });
                    now--;
                }
            }
        }
    }

    for (auto i : map)
    {
        cout << i.first << " " << i.second << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = vec[i].size() - 1; j >= 0; --j)
        {
            temp += map[vec[i][j]];
        }
        result += stoll(temp);
    }
    cout << result;
}


/*
aaa
aaa
1998


ACDEB
     GCF
a = 9
c = 8
g = 7
d = 6
e = 5
b = 4
f = 3
99437

자리수가 상관이있음.

GCF

정렬한 뒤 풀기?

스트링에 넣어서 해줬었지
*/