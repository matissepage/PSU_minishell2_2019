/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** add_element.c
*/

#include "../../include/minishell.h"

void *add_element(binary_t *binary, char *com)
{
    if (binary == NULL) {
        binary = create_node(com);
    } else if (binary != NULL) {
        if(my_strcmp(com,binary->command) < 0) {
            binary->left = add_element(binary->left, com);
        } else if (my_strcmp(com, binary->command) > 0) {
            binary->right = add_element(binary->right, com);
        }
    }
    return (binary);
}