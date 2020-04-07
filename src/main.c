/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** main.c
*/

#include "../include/minishell.h"

int main(int ac, char **av)
{
    binary_t *binary = NULL;
    char *str = "ls";
    char *cedrick = "cat";
    char *razmo = "razmo";
    char *rapido = "rapido";
    binary = add_element(binary, str);
    binary = add_element(binary, cedrick);
    binary = add_element(binary, razmo);
    binary = add_element(binary, rapido);
    print_bin_tree(binary);
    return (0);
}