#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;
void FAST()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
long long A[10005];
int main()
{
	FAST();

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];

	}
	for (int j = n - 1; j >= 0; j--)
	{
		cout << A[j] << " ";
	}

	return 0;
}