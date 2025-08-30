#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int left, int right, int search) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == search) {
            return mid;
        }
        else if (arr[mid] < search) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int A[100000];

    for (int j = 0; j < n; j++)
    {
        cin >> A[j];
    }

    sort(A, A + n);

    while (m--) {
        int search;
        cin >> search;
        int result = binarySearch(A, 0, n - 1, search);
        if (result == -1) {
            cout << "not found\n";
        }
        else {
            cout << "found\n";
        }
    }

    return 0;
}