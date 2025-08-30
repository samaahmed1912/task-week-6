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
int  A[105][105];
int main()
{
	FAST();
	int maxx = INT_MIN;
	int min = INT_MAX;
	int c = 0;
	int m = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> A[i][j];
		}
	}

	for (int k = 0; k < n; k++)
	{
		for (int l = 0; l < n; l++)
		{
			if (k == l)
			{
				c = c + A[k][l];
			}


		}
	}
	reverse(A, A + n);


	for (int s = 0; s < n; s++)
	{
		for (int v = 0; v < n; v++)
		{
			if (s == v)
			{
				m = m + A[s][v];
			}
		}
	}
	cout << abs(c - m);

	return 0;
}