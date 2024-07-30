#include <iostream>
using namespace std;

int main()
{
    int a, count = 0;
    char input;
    cin >> a;
    for(int i = 0; i < a; i++)
    {
        cin >> input;
        if (input == 'a' || input == 'i' || input == 'o' ||input == 'e' ||input == 'u')
        {
            count++;
        }
    }
    cout << count;
}
