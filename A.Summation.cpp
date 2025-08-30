#include <iostream>
#include <cmath>
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
	long long  c = 0;


	for (int j = 0; j < n; j++)
	{
		cin >> a[j];
		c = c + a[j];

	}

	cout << (abs)(c);

	return 0;
}