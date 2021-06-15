/*
** EPITECH PROJECT, 2021
** heap
** File description:
** epitech > 42
*/

#include "my.h"

Heap *init_heap(int *tab)
{
    Heap *heap = malloc(sizeof(Heap));
    int size = 0;
    int x = 0;

    for (; tab[size] != '\0'; size++);
    heap->save = size;
    heap->size = size;
    heap->arr = malloc(sizeof(int *) * (size + 1));
    for (; x < size; x++) {
        heap->arr[x] = tab[x];
    } return (heap);
}

void swap(int *n1, int *n2)
{
    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int min_heap(Heap *heap)
{
    int min_value = 0;
    int min_save = 0;

    for (int x = 0; x < heap->size; x++) {
        if (heap->arr[x] < heap->arr[min_value])
            min_value = x;
    } if (min_value != heap->size)
        swap(&heap->arr[min_value], &heap->arr[0]);
    min_value = heap->arr[0];
    heap->arr[0] = heap->arr[heap->size - 1];
    heap->size--;
    return (min_value);
}

void insert(Heap *heap, int data)
{
    if (heap->size + 1 <= heap->save) {
        heap->size++;
        heap->arr[heap->size - 1] = data;
    }
}