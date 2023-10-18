#include <stdio.h>
#include <conio.h>

void main()
{
	int i, c, n;
	i = 0;
	c = 0;
	printf("Enter any number : ");
	scanf("%d", &n);
	while (i < n)
	{
		i++;
		if (n % i == 0)
			c = c + 1;
	}
	if (c == 2)
	{
		printf("%d is a prime number.", n);
	}
	else
	{
		while (c != 2)
		{
			n++;
			i = 0, c = 0;
			while (i < n)
			{
				i++;
				if (n % i == 0)
					c++;
			}
		}
		printf("%d is the next prime number", n);
	}
	getch();

//printf("\n prime number %d", n);
	
	getch();
}
