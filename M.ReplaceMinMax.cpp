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
int  A[10005];
int main()
{
	FAST();

	long long n;
	cin >> n;
	for (long long i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	long long maxx = A[0];
	long long min = A[0];
	for (long long j = 0; j < n; j++)
	{
		if (A[j] > maxx)
		{
			maxx = A[j];
		}
		else if (A[j] < min)
		{
			min = A[j];
		}
	}



	for (long long k = 0; k < n; k++)
	{
		if (A[k] == maxx)
		{
			A[k] = min;
		}

		else if (A[k] == min)
		{
			A[k] = maxx;
		}
		else
		{
			A[k] = A[k];
		}


		cout << A[k] << " ";
	}


	return 0;
}