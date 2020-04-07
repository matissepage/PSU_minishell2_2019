/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** project_name.h
*/

#ifndef MY_MINISHELL_H_
#define MY_MINISHELL_H_

#include "my.h"
#include "../lib/my/my_printf.h"
#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*/////////////////////////////////////////|
/               Arbre Binaire              |
*/////////////////////////////////////////*|

binary_t *create_node(char *cmd);
void *add_element(binary_t *binary, char *com);
void print_bin_tree(binary_t *binary);

#endif /*MY_MINISHELL_H*/