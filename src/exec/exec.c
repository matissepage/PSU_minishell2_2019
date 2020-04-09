/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** exec.c
*/

#include "../../include/minishell.h"

char *getpwd(void)
{
    char *buffer = NULL;
    size_t size = 100;

    if (isatty(0) == 1)
        my_printf("$>");
    if (getline(&buffer, &size, stdin) == -1)
        return (NULL);
    int my_size = my_strlen(buffer);
    char *tmp = malloc(sizeof(char) * my_size);
    for (int i = 0; i < my_size; i += 1)
        tmp[i] = buffer[i];
    tmp[my_size - 1] = '\0';
    return (tmp);
}

int minishell1(char *buffer, char **env)
{
    node_t *node;
    char **execution = find_path(node, buffer, env);
    int status = 0;
    int i = fork();

    if (i == 0) {
        execve(execution[0], execution, NULL);
        perror("execve");
    } else {
        waitpid(i, &status, 0);
    }
    return (0);
}

int my_exec(char **env)
{
    char *buffer = NULL;

    while(1) {
        buffer = getpwd();
        if (buffer == NULL)
            return (84);
        minishell1(buffer, env);
    }
    return (0);
}