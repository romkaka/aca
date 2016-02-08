/*
** revstr.c for revstr in /home/kania_r/myminishell
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Mon Feb  8 20:57:50 2016 Romain Kania
** Last update Mon Feb  8 21:07:57 2016 Romain Kania
*/

#include <stdio.h>

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int	main(int ac, char **av)
{
  int	i;

  if (ac != 1)
    {
      i = my_strlen(av[1]);
      while (i-- != 0)
	printf("%c", av[1][i]);
    }
  printf("\n");
}
