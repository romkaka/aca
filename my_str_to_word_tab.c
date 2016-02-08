/*
** my_str_to_word_tab.c for my_str_to_word_tab in /home/kania_r/rendu/PSU_2015_minishell1
** 
** Made by Romain KANIA
** Login   <kania_r@epitech.net>
** 
** Started on Wed Jan 20 16:12:59 2016 Romain KANIA
** Last update Sun Jan 24 15:41:08 2016 Romain KANIA
*/

#include <stdlib.h>

int	count_word(char *str)
{
  int	i;
  int	n;

  n = 0;
  i = 0;
  while (str[i])
    {
      if (str[i] == ' ')
	{
	  while (str[i] == ' ')
	    i++;
	  if (str[i] != '\0')
	    n++;
	}
      if (str[i] != ' ' && i == 0)
	n++;
      if (str[i] != ' ')
	while (str[i] != ' ' && str[i] != '\0')
	  i++;
    }
  return (n);
}

char	**my_str_to_word_tab(char *str)
{
  int	nbwords;
  char	**word;
  int	i;
  int	n;
  int	l;

  n = 0;
  i = 0;
  nbwords = count_word(str);
  word = malloc(sizeof(char *) * (nbwords + 1));
  while (i < nbwords)
    word[i++] = malloc(sizeof(char *) * 200);
  i = 0;
  while (str[i])
    {
      l = 0;
      while (str[i] != ' ' && str[i] != '\0')
	word[n][l++] = str[i++];
      word[n][l] = '\0';
      if (str[i] != '\0')
	i++;
      n++;
    }
  return (word);
}
