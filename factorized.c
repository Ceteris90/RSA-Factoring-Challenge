#include "factors.h"

/**
 * factorized - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 * Author: Jonas Nyador
 * Return: int
 */
int factorized(char *buffer)
{

	uint32_t nm;
	uint32_t len;

	nm = atoi(buffer);


	for (len = 2; len < nm; len++)
	{
		if (nm % len == 0)
		{
			printf("%d=%d*%d\n", nm, nm / len, len);
			break;
		}
	}

return (0);
}
