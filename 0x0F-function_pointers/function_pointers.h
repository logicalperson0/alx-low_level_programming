#ifndef _function_pointers_h_
#define _function_pointers_h_

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif