#include <iostream>
using namespace std;

int main()
{
    int n, m, x;
    int A[100][100];
    cin >> n >> m;

    bool found = false;

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cin >> A[j][i];
        }
    }
    cin >> x;

    for (int t = 0; t < n; t++)
    {
        for (int y = 0; y < m; y++)
        {
            if (x == A[t][y])
            {
                found = true;
            }
        }
        if (found)
            break;
    }

    if (found)
        cout << "will not take number";
    else
        cout << "will take number";

    return 0;
}
