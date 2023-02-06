#ifndef _main_h_
#define _main_h_

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void errors(int fdfrom, int fdto, char *args[]);
void close_err(int closefrom, int fdfrom);

#endif
