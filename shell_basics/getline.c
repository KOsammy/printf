#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *input = NULL;
	size_t input_len = 0;
	char *split_str = NULL;

	while (1)
	{
		printf("$ ");

		ssize_t read = getline(&input, &input_len, stdin);
		if (read == -1)
		{
			free(input);
			printf("The prgram failed\n");
			perror("fopen");
			exit(1);
		}

		//printf("%s\n", input);
		input[strcspn(input, "\n")] = 0;

		split_str = strtok(input, " ");
		while(split_str != NULL)
		{
			printf("%s\n", split_str);
			split_str = strtok(NULL, " ");
		}

		free(input);
		input = NULL;
	}

	return (0);
}
