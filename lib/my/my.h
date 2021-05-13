/*
** EPITECH PROJECT, 2020
** my
** File description:
** Prototypes lib
*/

#include <stdlib.h>
#include <unistd.h>
#ifndef MY_H
#define MY_H

#define ERROR_EXIT write(1, "Error\n", 6);\
    return (84);
int my_atoi(char const *str);
int is_neg(char a);
int my_getnbr(char const *str);
int reste(int nb, int i);
int my_is_prime(int nb);
int my_isneg(int nb);
char *my_itoa(int nb);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
void my_swaprev(char *a, char *b);
char *my_revstr(char *str);
char *my_strcat(char *dest, char const *src);
int  my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strncat(char *dest, char const *src, int p);
void my_swap(int *a, int *b);
void check_file(char *str);
void copy_in_draft(char *str, char *draft, int line, int len);
void find_in_draft(char *draft, int len, int line, char *str);
int get_min(int c1, int c2, int c3);
void replace_bsq(char *str, int *nb, int len, int max);
int first_line(char *str);
int square_lines(char *str);
int nb(char *str);
#endif