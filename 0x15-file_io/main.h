#ifndef _main_h_
#define _main_h_

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif