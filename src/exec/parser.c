/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** parser.c
*/

#include "../../include/minishell.h"

char *parcour_list(node_t *node, char **env)
{
    char **tab = NULL;
    node_t *tmp = NULL;
    tmp = get_env(env);

    while (tmp != NULL) {
        if (my_strcmp(tmp->key, "PATH") == 0) {
            return (tmp->value);
        }
        tmp = tmp->next;
    }
}

char **find_path(node_t *node, char *path, char **env)
{
    int i = 0;
    char **tab;
    char **test = NULL;
    char *tmp = NULL;
    int check = 0;
    check = checker(path, node);
    char *str = parcour_list(node, env);
    tab = word_array(str, ':');
    test = malloc(sizeof(char *) * 2);
    test[1] = NULL;

    if (access(path, X_OK) == 0) {
        test[0] = path;
        return (test);
    }
    while(tab[i]) {
        str = get_path(tab[i]);
        tmp = my_strcat(tab[i], my_strcat("/", path));
        if (access(tmp, X_OK) == 0) {
            test[0] = tmp;
            return (test);
        } else
            i += 1;
    }
    return (NULL);
}