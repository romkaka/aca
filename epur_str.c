/*
** epur_str.c for epur in /home/kania_r/rendu/PSU_2015_minishell1
** 
** Made by Romain KANIA
** Login   <kania_r@epitech.net>
** 
** Started on Fri Jan 22 18:17:46 2016 Romain KANIA
** Last update Sun Jan 24 16:06:50 2016 Romain KANIA
*/

#include <stdlib.h>

char	*epur_str(char *str)
{
  int	i;
  char	*strcopy;
  int	n;
  int	statue;

  statue = 0;
  n = 0;
  i = 0;
  strcopy = malloc(sizeof(char *) * 100);
  while (str[i])
    {
      while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
	i++;
      if ((str[i] != ' ' && str[i] != '\t') && str[i] != '\0' && statue != 0)
	strcopy[n++] = ' ';
      while ((str[i] != ' ' && str[i] != '\t') && str[i] != '\0')
	{
	  strcopy[n++] = str[i];
	  i++;
	  statue = 1;
	}
      strcopy[n] = '\0';
    }
  return (strcopy);
}
