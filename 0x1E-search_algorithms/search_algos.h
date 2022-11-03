#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Estand librery includes */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <math.h>

/* Prototype of funtions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /* _SERACH_ALGOS_H_ */
