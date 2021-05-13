/*
** EPITECH PROJECT, 2020
** draft
** File description:
** Set draft
*/

#include "my.h"

void copy_in_draft(char *str, char *draft, int line, int len)
{
    int n = 0;
    int i = 0;
    for (; str[n - 1] != '\n'; n++);
    for (; i != len + 1; draft[i] = '0', i++);
    draft[i++] = '\n';
    for (int l = 0; l != line; l++) {
        draft[i++] = '0';
        for (; str[n] != '\n'; draft[i] = str[n], n++, i++);
        n++;
        draft[i++] = '\n';
    }
    draft[i] = '\0';
}

void find_in_draft(char *draft, int len, int line, char *str)
{
    int *nb = malloc(sizeof(int) * ((len + 1) * (line + 1)));
    int i = 0;
    int max = 0;
    len++;
    for (; draft[i]; i++) {
        if (draft[i] == '0')
            nb[i] = 0;
        if (draft[i] == '\n')
            nb[i] = -1;
        if (draft[i] == 'o')
            nb[i] = 0;
        if (draft[i] == '.') {
            nb[i] = get_min(nb[i - 1], nb[i - (len + 1)], nb[i - (len + 2)]);
            (nb[i] > max) && (max = nb[i]);
        }
    }
    nb[i] = -2;
    if (max > 0)
        replace_bsq(str, nb, len, max);
}

void replace_bsq(char *str, int *nb, int len, int max)
{
    int i = 0;
    int n = 0;
    int p = 0;
    for (; nb[i] != max; i++) {
        (nb[i] == -1) && (n++);
    }
    for (; str[p] != '\n'; p++);
    i = i - (len + n) + p;
    for (int max_lines = max; max_lines != 0; max_lines--) {
        for (int max_len = max, tmp = i; max_len != 0; max_len--) {
            str[tmp] = 'x';
            tmp--;
        }
        i = i - len;
    }
}