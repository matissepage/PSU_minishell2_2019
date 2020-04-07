/*
** EPITECH PROJECT, 2019
** matissepage
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H

#include <stdarg.h>
#include <stdlib.h>

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a , int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab , int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp (char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum (char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem (char const *str, int size);
char *my_strcat(char *str1, char *str2);
char *my_strncat(char *dest , char const *src, int nb);
int my_putnbr_base(int n, char const *str);
int my_putnbr_unsigned(unsigned int nb);
void my_add_tab(char *elem, char *str);
char *clean_buffer(char *str);
char **word_array(char *src, char c);

#endif /*MY_H*/
