/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** struct.h
*/

#include "minishell.h"

typedef struct binary_s {
    char *command;
    struct binary_s *left;
    struct binary_s *right;
} binary_t;