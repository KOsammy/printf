#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int ac, char **av)
{
	char *filename = av[1];
	char *path = getenv("PATH");
	char *dir;
	char full_path[1024];
	char *path_copy = strdup(path);
	extern char **environ;

	//Tokenize PATH into directory
	dir = strtok(path_copy, ":");
	while (dir != NULL)
	{
		// Construct full path
		snprintf(full_path, sizeof(full_path), "%s/%s", dir, filename);
		//Check if file is executable
		if (access(full_path, X_OK) == 0)
		{
			free(path_copy);
			//Return the full path if found
			printf("%s\n", full_path);
		}
		//Move to the next directory
		dir = strtok(NULL, ":");
	}
	if (full_path)
	{
		printf("%s\n", *environ);
		printf("#############################################\n");
		printf("%s\n", path_copy);
		printf("Found %s at: %s\n", filename, full_path);
		// Remember to free the result if it was allocated
		//free(full_path);
	} else
	{
		printf("%s not found in PATH.\n", filename);
	}

	free(path_copy);
	return(0);
}
