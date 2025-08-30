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
int  a[100000];
int main()
{
	FAST();
	int n;
	cin >> n;


	for (int j = 0; j < n; j++)
	{
		cin >> a[j];


	}
	for (int f = 0; f < n; f++)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[f] < a[i])
			{
				swap(a[f], a[i]);
			}
		}
	}
	for (int m = 0; m < n; m++)
	{
		cout << a[m] << " ";
	}
	return 0;
}






































