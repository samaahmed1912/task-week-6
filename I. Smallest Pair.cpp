#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int min1 = 1000000;
    int sum = 0;
    int m;
    cin >> m;
    int n;

    while (m--)
    {
        min1 = INT_MAX;
        cin >> n;
        int A[1000];

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            sum = 0;
            for (int j = i + 1; j < n; j++)
            {
                sum = A[i] + A[j] + j - i;
                if (min1 > sum)
                {
                    min1 = sum;
                }
            }
        }
        cout << min1 << "\n";
    }


    return 0;

}
