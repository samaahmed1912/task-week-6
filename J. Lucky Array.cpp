#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[10000];
    for (int j = 0; j < n; j++)
    {
        cin >> A[j];
    }

    int minval = A[0];
    for (int i = 1; i < n; i++)
    {
        if (minval > A[i])
        {
            minval = A[i];
        }
    }

    int sum = 0;
    for (int t = 0; t < n; t++)
    {
        if (minval == A[t])
        {
            sum += 1;
        }
    }

    if (sum % 2 == 1)
    {
        cout << "Lucky";
    }

    else if (sum % 2 == 0)
    {
        cout << "Unlucky";
    }

    return 0;
}