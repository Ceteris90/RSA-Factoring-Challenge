#include "factors.h"

/**
 * main - main factors function
 * @argc : number of arguments
 * @argv : vector of arguments
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	char *buffer = NULL;
	FILE *fileptr;
	size_t count;
	size_t line;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}

	fileptr = fopen(argv[1], "r");
	if (fileptr == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((line = getline(&buffer, &count, fileptr)) != -1)
	{
		factorized(buffer);
	}

	return (0);
}
