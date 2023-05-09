#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *create_buffer(char *file);
void close_file(int fd);


/*ELF HEADER TASK*/
#include <elf.h>
#include <fcntl.h>

void CheckElf(unsigned char *e_identifier);
void PrintMagic(unsigned char *e_identifier);
void PrintClass(unsigned char *e_identifier);
void PrintData(unsigned char *e_identifier);
void PrintVersion(unsigned char *e_identifier);
void PrintAbi(unsigned char *e_identifier);
void PrintOsabi(unsigned char *e_identifier);
void PrintType(unsigned int eType, unsigned char *e_identifier);
void PrintEntry(unsigned long int eEntry, unsigned char *e_identifier);
void CloseElf(int elf);
#endif
