#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int sum = 0;
    int n;
    cin >> n;
    int A[10000];
    int B[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    sort(A, A + n);
    sort(B, B + n);
    for (int i = 0; i < n; i++)
    {
        if (A[i] == B[i])
        {
            sum += 1;
        }
    }
    if (sum == n)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }


    return 0;
}