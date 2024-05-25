#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 1)
		cout << 1;
	else
	{
		int j=7,count = 1;
		while (n > j)
		{
			j = j + 6 * (++count);
		}
		cout << count+1;
	}
	return 0;
}