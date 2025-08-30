#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long start = 0;
    long long end = 1;
    long long f = 0;

    if (n == 1)
    {
        cout << start;
    }
    else if (n == 2)
    {
        cout << end;
    }
    else
    {
        for (int j = 3; j <= n; j++)
        {
            f = start + end;
            start = end;
            end = f;

        }
        cout << f;
    }


    return 0;
}