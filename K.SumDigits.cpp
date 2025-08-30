#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    /*int A [100000];*/
    string a;
    cin >> a;
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        sum += a[j] - 48;
    }

    cout << sum;
    return 0;
}