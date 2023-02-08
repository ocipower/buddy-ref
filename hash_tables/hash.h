#ifndef HASH_H
#define HASH_H

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

#define MAX_NAME 256
#define BUCKET_SIZE 10

typedef struct
{
	char name[MAX_NAME];
	int age;
	char gender;
}person;

int get_hash1(char *str);
int get_hash2(void * input, size_t size);


#endif