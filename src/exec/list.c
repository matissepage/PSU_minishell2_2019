/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** list.c
*/

#include "../../include/minishell.h"

void add_element_list(node_t **list, char *key, char *value)
{
    node_t *new_node = malloc(sizeof(node_t));
    node_t *tmp = *list;

    new_node->key = key;
    new_node->value = value;
    new_node->next = NULL;
    if ((*list) == NULL) {
        (*list) = new_node;
        return;
    }
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new_node;
}