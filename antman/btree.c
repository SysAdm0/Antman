/*
** EPITECH PROJECT, 2021
** btree
** File description:
** epitech > 42
*/

#include "my.h"

Tree *add_node(int data)
{
    Tree *tree = malloc(sizeof(Tree));

    tree->data = data;
    tree->left = NULL;
    tree->right = NULL;
    return (tree);
}

Tree *huffman_tree(Tree *tree, int *tab, int size, int step)
{
    if (step < size) {
        Tree *temp = add_node(tab[step]);
        tree = temp;
        tree->left = huffman_tree(tree->left, tab, size, (step * 2) + 1);
        tree->right = huffman_tree(tree->right, tab, size, (step * 2) + 2);
    } return (tree);
}

int *huffman_heap(Heap *heap, int *tab)
{
    int *save_tree = malloc(sizeof(int) * (heap->size * 2));
    int left;
    int right;
    int x = 0;

    while (heap->size >= 2) {
        left = min_heap(heap);
        right = min_heap(heap);
        save_tree[x] = left;
        save_tree[x + 1] = right;
        insert(heap, left + right);
        x += 2;
    } save_tree[x] = (left + right);
    save_tree = my_revnbr(save_tree);
    return (save_tree);
}

char **make_alpha(Tree *tree, int *tab, int add, char **record)
{
    if (tree->left) {
        tab[add] = 1;
        make_alpha(tree->left, tab, add + 1, record);
    } if (tree->right) {
        tab[add] = 0;
        make_alpha(tree->right, tab, add + 1, record);
    } if (!(tree->left) && !(tree->right)) {
        for (int x = 0; x < add; x++) {
            record[add_nb(0)][x] = tab[x] + 48;
        } add_nb(1);
    } if (add_nb(0) == mylen_str(0))
        return (record);
}

int main_tree(char *str, int *tab, char *buffer)
{
    Tree *tree;
    Heap *heap = init_heap(tab);
    char **record;
    int *tree_tab;
    int *new_tab;
    int new_size = 0;
    int size = 0;

    mylen_str(mylen(str));
    tree_tab = huffman_heap(heap, tab);
    for (; tree_tab[size] != '\0'; size++);
    for (; tab[new_size] != '\0'; new_size++);
    new_tab = malloc(sizeof(char) * new_size);
    record = malloc(sizeof(char *) * new_size * 8);
    for (int x = 0; x < new_size; x++)
        record[x] = malloc(sizeof(char) * 8);
    tree = huffman_tree(tree, tree_tab, size, 0);
    record = make_alpha(tree, new_tab, 0, record);
    convert(str, buffer, record);
    free(new_tab);
    free(record);
}