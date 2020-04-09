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

#define custom_major(devnum)           (((unsigned int)devnum & 0xFF00U) >> 8)
#define custom_minor(devnum)           ((unsigned int)devnum & 0xFFFF00FFU)


#ifndef	__LIBGNL__
#define	__LIBGNL__

char	*get_next_line(int fd);
char	*get_next_line_dbg(int fd);

#endif

/*/////////////////////////////////////////|
/               Arbre Binaire              |
*/////////////////////////////////////////*|

binary_t *create_node(char *cmd);
void *add_element(binary_t *binary, char *com);
void print_bin_tree(binary_t *binary);

/*/////////////////////////////////////////|
/                    EXEC                  |
*/////////////////////////////////////////*|

char *getpwd(void);
int minishell1(char *buffer, char **env);
int my_exec(char **env);
node_t *get_env(char **env);
char *get_key(char *str);
char *get_path(char *str);
void add_element_list(node_t **list, char *key, char *value);
char *parcour_list(node_t *node, char **env);
char **find_path(node_t *node, char *path, char **env);

#endif /*MY_MINISHELL_H*/