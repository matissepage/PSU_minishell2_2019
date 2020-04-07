/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** word_array.c
*/

#include <stdio.h>

#include "my.h"

int my_count_word(char *str, char c)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if ((str[i] != c && str[i + 1] == c) || (str[i] != c && str[i + 1] == '\0'))
            count += 1;
        i += 1;
    }
    return (count);
}

int my_len(char *str, char c, int *index)
{
    int compteur = 0;

    for (; str[*index] !=  c && str[*index] != '\0'; *index += 1) {
        compteur += 1;
    }
    return (compteur);
}

char **my_allocation(char **tab, char *str, char c)
{
    int size = my_count_word(str, c);
    tab = malloc(sizeof(char*) * (size + 1));
    int pos = 0;

    for (int i = 0; i < my_strlen(str); i++) {
        tab[pos] = malloc(sizeof(char) * my_len(str, c, &i) + 1);
        pos += 1;
    }
    tab[size] = NULL;
    return (tab);
}

char **word_array(char *src, char c)
{
    int k = 0;
    int j = 0;
    int i = 0;
    char **tab = NULL;
    char *str = clean_buffer(src);

    tab = my_allocation(tab, str, c);
    while (str[k] != '\0') {
        tab[i][j] = str[k];
        j += 1;
        k += 1;
        if (str[k] == c) {
            tab[i][j] = '\0';
            i += 1;
            j = 0;
            k += 1;
        }
    }
    tab[i][j] = '\0';
    return (tab);
}
