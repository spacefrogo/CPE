/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** something small
*/

#include "solver.h"

pos_t north(pos_t pos)
{
    pos.y--;
    return pos;
}

pos_t east(pos_t pos)
{
    pos.x++;
    return pos;
}

pos_t south(pos_t pos)
{
    pos.y++;
    return pos;
}

pos_t west(pos_t pos)
{
    pos.x--;
    return pos;
}
