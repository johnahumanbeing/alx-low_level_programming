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
#include <string.h>

#define BUFFER_SIZE 1024

void print_magic(const Elf64_Ehdr *header);

void print_class(const Elf64_Ehdr *header);

void print_data(const Elf64_Ehdr *header);

void print_version(const Elf64_Ehdr *header);

void print_osabi(const Elf64_Ehdr *header);

void print_abiversion(const Elf64_Ehdr *header);

void print_type(const Elf64_Ehdr *header);

void parse_arguments(int argc);

int open_source(char *filename);

int open_dest(char *filename, mode_t mode);

void read_source(int source_fd, int dest_fd, char *buffer);

void write_dest(int dest_fd, char *buffer, ssize_t read_bytes);

void close_files(int source_fd, int dest_fd);

int _putchar(char c);

size_t _strlen(char *str);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

#endif
