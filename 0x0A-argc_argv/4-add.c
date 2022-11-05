#include "main.h"

/**
  * main - entry point
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 0 or 1 and error
  */
int main(int argc, char *argv[])
{
	int i, j, k, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else
	{

		for (i = 1; i < argc; i++)

		{
			k = strlen(argv[i]);

			for (j = 0; j < k; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");

					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}

