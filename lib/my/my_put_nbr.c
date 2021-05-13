/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** lib
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int i = 0;
    int a = 0;
    int count = 0;
    int display_nb = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
    }
    my_putchar((nb % 10) + 48);
}
