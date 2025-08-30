#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, c = 0;
        cin >> n;
        int a[105];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] >= a[j - 1])
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << c + n << "\n";
    }


    return 0;
}