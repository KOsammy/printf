#include <stdio.h>

/**
 * Prints all argument
 * @ac: count
 * @av: array of argumenets
 */
int main(int ac, char **av)
{
	int i = 0;

	while (av[i] != NULL)
		printf("%s\n", av[i++]);

	return (0);
}
