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
int A[100000];
int main()
{
	FAST();
	int j;
	int m = INT_MAX;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];



		if (A[i] < m)
		{
			m = A[i];
			j = i;
		}



	}
	cout << m << " " << j + 1;

	return 0;
}
