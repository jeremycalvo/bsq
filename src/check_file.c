/*
** EPITECH PROJECT, 2020
** find_bsq
** File description:
** Call functions
*/

#include "my.h"

int first_line(char *str)
{
    int i = 0;
    if (str[0] == '\n') {
        return (-1);
    }
    if (str[0] == '\0')
        return (-1);
    for (; str[i] != '\n'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return (-1);
        }
    }
    if (str[i + 1] != 'o' && str[i + 1] != '.') {
        return (-1);
    }
    return (my_getnbr(str));
}

int square_lines(char *str)
{
    int len = 0;
    int i = 0;
    for (; str[i] != '\n'; i++);
    i++;
    for (; str[i] != '\n'; i++, len++)
        if (!(str[i] == 'o' || str[i] == '.'))
            return (-1);
    i++;
    for (int n = 0; str[i] != '\0'; i++, n++) {
        if (!(str[i] == 'o' || str[i] == '.' || str[i] == '\n')) {
            return (-1);
        }
        if (str[i] == '\n' && n != len) {
            return (-1);
        }
        if (str[i] == '\n' && n == len)
            n = -1;
        }
    return (len);
}

void check_file(char *str)
{
    int line = first_line(str);
    int len = square_lines(str);
    int r = 0;
    char *draft = malloc(sizeof(char) * (len + 10) * (line + 1));
    int w = my_strlen(str);
    for (; str[r] != '\n'; r++);
    copy_in_draft(str, draft, line, len);
    find_in_draft(draft, len, line, str);
    my_revstr(str);
    for (; str[w] != '.' && str[w] != 'o' && str[w] != 'x'; w--);
    str[w + 1] = '\0';
    my_revstr(str);
    write(1, str, my_strlen(str));
}

int get_min(int c1, int c2, int c3)
{
    int min = c1;
    if (c2 < min)
        min = c2;
    if (c3 < min)
        min = c3;
    min++;
    return (min);
}

int nb(char *str)
{
    int nb = my_getnbr(str);
    int i = 0;
    int lines = 0;
    for (; str[i] != '\n'; i++);
    i++;
    for (; str[i]; i++) {
        if (str[i] == '\n')
            lines++;
    }
    if (str[i - 1] != '\n')
        lines++;
    if (lines != nb)
        return (-1);
    return (0);
}