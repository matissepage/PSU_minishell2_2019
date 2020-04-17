/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** ptr_to_fct.c
*/

#include "../../include/minishell.h"

static const funct_array_t funct_array[] = {
    {"env", my_env},
    {"setenv", my_setenv},
    {"exit", my_exit},
};

int checker(char *command, node_t *node)
{
    for (int i = 0; i < 3;i++) {
        if (my_strcmp(command, funct_array[i].command) == 0) {
            funct_array[i].fct(command, node);
            return (0);
        }
    }
    return (-1);
}