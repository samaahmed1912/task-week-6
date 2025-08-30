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
	int c = 0;
	int n;
	cin >> n;


	for (int j = 0; j < n; j++)
	{
		cin >> a[j];


	}

	int b;
	cin >> b;

	for (int i = 0; i < n; i++)
	{
		if (b == a[i])
		{
			c = c + 1;
			cout << i;
			break;

		}

	}

	if (c != 1)
	{
		cout << "-1";
	}
	return 0;
}