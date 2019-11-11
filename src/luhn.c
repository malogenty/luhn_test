/*
** EPITECH PROJECT, 2019
** Luhn
** File description:
** luhn.c
*/

int luhn_check(char *nbr)
{
    int total_unpair_d = 0;
    int total_pair_d = 0;

    for (int i = 0; nbr[i] != '\0'; i++) {
        if (i % 2 == 1)
            total_pair_d += cti(nbr[i]);
        else {
            total_unpair_d += (cti(nbr[i]) * 2) % 10 + (cti(nbr[i]) * 2) / 10;
        }
    }
    return ((total_pair_d + total_unpair_d) % 10 == 0);
}