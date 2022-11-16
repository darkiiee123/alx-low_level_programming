#include "3-calc.h"

/**
 * main - calls the func
 * @argc: no of args
 * @argv: string pointer to arguments
 *
 * Return: the result of an operation
 */
int main(int argc, char *argv[])
{
	int (*s)(int, int);
	char f;
	int c, a, n;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = get_op_func(argv[2]);
	if (!s)
	{
		printf("Error\n");
		exit(99);
	}
	c = atoi(argv[1]);
	f = *argv[2];
	a = atoi(argv[3]);

	if ((f == 47 || f == 37) && a == 0)
	{
		printf("Error\n");
		exit(100);
	}

	n = s(c, a);
	printf("%d\n", n);
	return (0);
}
