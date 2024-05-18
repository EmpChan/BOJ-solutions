#define MAX 10000001
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool nums[MAX] = { false };

int main()
{
	long long min, max;
	int count = 0;
	scanf("%lld %lld", &min, &max);
	for (long long k = 2; k <= sqrt(max); k++)
		nums[k] = true;
	for (long long k = 2; k <= sqrt(max); k++)
		for (long long i = k * k; i <= sqrt(max); i += k)
			nums[i] = false;
	for (long long i = 2; i <= sqrt(max); i++)
	{
		if (nums[i])
		{
			long long num = i;
			while (i <= (max / num))
			{
				if (num * i >= min)
					count++;
				num *= i;
			}
		}
		else continue;
	}
	printf("%d", count);
	return 0;
}