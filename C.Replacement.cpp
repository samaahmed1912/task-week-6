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
int a[100000];
int main()
{
	FAST();

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

		if (a[i] < 0)
		{
			a[i] = 2;
		}
		else if (a[i] > 0)
		{
			a[i] = 1;
		}

		cout << a[i] << " ";
	}
	return 0;
}