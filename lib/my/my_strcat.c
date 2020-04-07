/*
** EPITECH PROJECT, 2019
** my_strcate
** File description:
** lib
*/


#include "my.h"
#include <stdlib.h>

char *my_strcat(char *str1, char *str2)
{
    int size = 0;
    char *tmp;
    for (;str1[size] != '\0'; size++);
    tmp = malloc(sizeof(char) * (size * 4));

    for (int i = 0; str1[i] != '\0'; i++)
        tmp[i] = str1[i];
    for (int j = 0; str2[j] != '\0'; j++) {
        tmp[size] = str2[j];
        size++;
    }
    tmp[size] = '\0';
    return (tmp);
}