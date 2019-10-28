#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif /* SORT_H */
