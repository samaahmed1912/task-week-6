#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int min = 1000000;
    int sum = 0;
    int count = 0;
    int n;
    cin >> n;
    int A[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            sum += 1;
        }
    }
    if (sum == n)
    {
        for (int i = 0; i < n; i++)
        {
            count = 0;
            while (A[i] != 0 && A[i] % 2 == 0)
            {
                A[i] = A[i] / 2;
                count += 1;
            }
            if (min > count)
            {
                min = count;
            }

        }
        cout << min;
    }
    else
    {
        cout << 0;
    }


    return 0;
}
