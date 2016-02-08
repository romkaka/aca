/*
** main.c for main in /home/kania_r/mymoulinette
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Mon Jan 25 21:26:43 2016 Romain Kania
** Last update Mon Feb  8 20:19:14 2016 Romain Kania
*/

#include <stdio.h>
int	main(int ac, char **av)
{
  if (ac > 20)
    printf("%d\n", ac - 1);
  else
    return (0);
}
