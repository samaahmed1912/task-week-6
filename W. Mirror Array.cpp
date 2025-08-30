#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;


    int A[1000][1000];
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cin >> A[j][i];
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = m - 1; i >= 0; i--)
        {
            cout << A[j][i] << " ";

        }
        cout << endl;
    }

    return 0;
}
