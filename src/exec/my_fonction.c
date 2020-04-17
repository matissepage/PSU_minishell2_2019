/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** my_fonction.c
*/

#include "../../include/minishell.h"

void my_env(char *command, node_t *node)
{
    print_my_node(node);
}

void my_setenv(char *command, node_t *node)
{
    printf("tu connais le setenv\n");
}

void my_exit(char *command, node_t *node)
{
    printf("c'est tout pour moi je me casse\n");
    exit (0);
}