#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry point
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 if it works, 1 if not
*/


int main(int argc, char *argv[])
{
	int num, amount_of_money, cents = 0, coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		amount_of_money = atoi(argv[1]);

		if (amount_of_money < 0)
		{
			printf("0\n");
			return (0);
		}

		else
		{
			for (num = 0; num < 5 && amount_of_money >= 0; num++)
				while (amount_of_money >= coins[num])
				{
					cents++;
					amount_of_money -= coins[num];
				}
		}
	}

	printf("%d\n", cents);
	return (0);
}
