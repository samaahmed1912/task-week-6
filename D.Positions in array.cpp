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

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];

		if (A[i] <= 10)
		{
			cout << "A" << "[" << i << "]" << " = " << A[i] << "\n";
		}

	}
	return 0;
}