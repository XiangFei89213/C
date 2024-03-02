
#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>
#include<string.h>

void Sieve(int n)
{
	// int ptr;
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));
	int p;

	for (int i = 2; i*i <= n; i++)
	{
		if (prime[i] == true)
		{
			for (p = i * i; p<= n; p=p + i)
			{
				prime[p] = false;
			}
		}
	}

	//print prime
	for (int p = 2; p <= n; p++)
		if (prime[p])
			printf("%d ", p);
}

int main()
{

	printf("prime number\n");
	Sieve(30);

	return 0;
}

