#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int A[1000000];
    int freq[1000000] = { 0 };

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        freq[A[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        cout << freq[i] << "\n";
    }

    return 0;
}
