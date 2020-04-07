/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** clean_buffer.c
*/

#include "my.h"
#include <stdio.h>

char *clean_buffer(char *str)
{
    int i = 0;
    int j = 0;
    char *dest = malloc(sizeof(char) * my_strlen(str) + 1);

    for (; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] == ' ')
            continue;
        if (str[i] == ' ' && str[i + 1] == '\0')
            continue;
        dest[j] = str[i];
        j++;
    }
    dest[j] = '\0';
    return (dest);
}