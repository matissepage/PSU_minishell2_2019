/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** print_tree.c
*/

#include "../../include/minishell.h"

void print_bin_tree(binary_t *binary)
{
    if (binary == NULL) {
        my_printf("Ton arbre n'a pas était arrosé\n");
        return;
    }
    my_printf("my command is [%s];", binary->command);
    // if (tree->previous)
    //     my_printf("my previous command, is [%s];", tree->previous->node->command);
    if (binary->left)
        my_printf("my left, is [%s];", binary->left->command);
    if (binary->right)
        my_printf("my right, is [%s];", binary->right->command);
    my_printf("\n");
    print_bin_tree(binary->left);
    return (print_bin_tree(binary->right));
}