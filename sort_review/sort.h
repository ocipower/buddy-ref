#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void print_array(int array[], int len);
void bubble_sort(int array[], int len);
void selection_sort(int array[], int len);
void insertion_sort(int array[], int len);
void merge_sort(int array[], int len);
void merge_sort_recursion(int array[], int left, int right);
void merge_sorted_array(int array[], int left, int mid, int right);
void quick_sort_recursion(int array[], int l, int u);
void quick_sort_recursion(int array[], int l, int u);
int quick_sort_partition(int array[], int l, int u);
void quick_sort(int array[], int l, int u);
void swap(int *a, int *b);
int * merge(int a[], int b[], int array[], int left, int right);
void partition(int array[], int lenght);


#endif