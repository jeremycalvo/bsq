/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "my.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int ac, char **av)
{
    char *str;
    int filedesc = open(av[1], O_RDONLY);
    struct stat stats;
    int line;
    int len;
    if (filedesc < 0) {
        ERROR_EXIT
    }
    stat(av[1], &stats);
    str = malloc(stats.st_size + 1);
    read(filedesc, str, stats.st_size);
    close(filedesc);
    if (first_line(str) == -1 || square_lines(str) == -1 || nb(str) == -1) {
        ERROR_EXIT
    }
    check_file(str);
    free(str);
    return (0);
}