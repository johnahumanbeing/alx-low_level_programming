#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUF_SIZE 1024

void parse_arguments(int argc, char *argv[]);

int open_file(char *filename);

int open_dest(char *filename);

void read_from(int source_fd, int dest_fd);

void write_dest(int dest_fd, char *buffer, ssize_t read_bytes);

void close_files(int source_fd, int dest_fd);

int _putchar(char c);

size_t _strlen(char *str);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

#endif
