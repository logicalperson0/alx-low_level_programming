#ifndef _search_algos_h_
#define _search_algos_h_

#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

int exponential_search(int *array, size_t size, int value);
int binary_sear(int *array, size_t prev, size_t nxt, int value);

#endif
