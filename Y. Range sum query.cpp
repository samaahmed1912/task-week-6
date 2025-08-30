#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    long long  n, m;
    cin >> n >> m;
    long long A[100005];

    for (int j = 0; j < n; j++)
    {
        cin >> A[j];
    }

    for (int j = 1; j < n; j++)
    {
        A[j] = A[j] + A[j - 1];
    }

    while (m--) {
        int start, end;
        cin >> start >> end;
        start--;
        end--;
        long long sum = 0;
        if (start == 0)
        {
            sum = A[end];
            // cout << A[end] << endl ;
        }
        else
        {
            sum = A[end] - A[start - 1];
            // cout << A[end]  - A[start - 1] << endl;
        }
        cout << sum << endl;
    }


    return 0;
}
