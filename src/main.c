/*
** EPITECH PROJECT, 2019
** luhn_test
** File description:
** main.c
*/

int my_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if (ac < 2)
        return (84);
    my_putchar(itc(luhn_check(av[1])));
}