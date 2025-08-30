#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char arr[1000];
int main()
{
    int A, B, x = 0, z = 0;
    cin >> A >> B;
    for (int i = 0; i < (A + B + 1); i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < (A + B + 1); i++)
    {
        if (arr[i] == '-' && i == A)
            x++;
        if (arr[i] >= 48 && arr[i] <= 57)
            z++;
    }
    if (x != 0 && z == A + B)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}