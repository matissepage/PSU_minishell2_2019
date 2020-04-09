/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** get.c
*/

#include "../../include/minishell.h"

node_t *get_env(char **env)
{
    node_t *list = NULL;
    char *value = NULL;
    char *key = NULL;

    for (int i = 0; env[i]; i++) {
        key = get_key(env[i]);
        value = get_path(env[i]);
        add_element_list(&list, key, value);
    }
    return (list);
}

char *get_key(char *str)
{
    char *result = NULL;
    int i = 0;

    for (; str[i] != '='; i++);
    result = malloc(sizeof(char) * (i + 1));
    for (int j = 0; j < i; j++) {
        result[j] = str[j];
    }
    result[i] = '\0';
    return (result);
}

char *get_path(char *str)
{
    char *result = NULL;
    int i = 0;
    int j = 0;

    for (; str[i] != '\0' && str[i] != '='; i++);
    if (str[i] == '\0') {
        return (str);
    }
    i += 1;
    result = malloc(sizeof(char) * (my_strlen(str) + 1));
    for (; str[i] != '\0'; i++) {
        result[j] = str[i];
        j++;
    }
    result[j] = '\0';
    return (result);
}