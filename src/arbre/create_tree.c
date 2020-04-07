/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** create_tree.c
*/

#include "../../include/minishell.h"

binary_t *create_node(char *cmd)
{
    binary_t *binary;
    binary = malloc(sizeof(binary_t));
    binary->command = cmd;
    binary->left = NULL;
    binary->right = NULL;
    return (binary);
}