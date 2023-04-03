#ifndef _FACTORS_H_
#define _FACTORS_H_


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>


size_t getline(char **lineptr, size_t *n, FILE *stream);
int factorized(char *buffer);

#endif /* _FACTORS_H_ */
