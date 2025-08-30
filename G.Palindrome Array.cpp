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
int  A[100005];
int main()
{
	FAST();
	int c = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	for (int j = 0; j < n; j++)
	{
		if (A[j] != A[n - j - 1])
		{
			c = c + 1;
		}

	}

	if (c == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";

	}

	return 0;
}