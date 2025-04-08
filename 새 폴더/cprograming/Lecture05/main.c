#include <stdio.h>

int main()
{
	int a = 1, b = 2;
	while (b < 8)
	{
		while (a)
		{
			printf("*");
			a--;
		}
		printf("\n");
		a = b;
		b++;
	}
}
	