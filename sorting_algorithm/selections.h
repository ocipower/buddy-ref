#ifndef SELECTIONS_H
#define SELECTIONS_H
#include <stdio.h>
#include <string.h>

int *selection_sort(int array[], int len);
void print(int array[]);
void *insertion_sort(int *array, int len);
int *bubble_sort(int array[], int len);
int partition(int array[], int start, int end);
void swap(int *e1, int *e2);
void swap2(int e1, int e2);
void normal_partion(int array[], int start, int end);
#endif