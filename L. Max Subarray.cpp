#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int counter;
    cin >> counter;
    while (counter--)
    {
        int n;
        cin >> n;
        int arr[10000];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            cout << arr[i] << " ";
        }
        for (int i = 0; i < n; i++)
        {
            int maxx = arr[i];
            for (int j = i + 1; j < n; j++)
            {
                if (maxx < arr[j])
                {
                    maxx = arr[j];
                }
                cout << maxx << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}