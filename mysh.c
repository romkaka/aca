/*
** mysh.c for minishell in /home/kania_r/rendu/PSU_2015_minishell1
** 
** Made by Romain KANIA
** Login   <kania_r@epitech.net>
** 
** Started on Wed Jan 20 10:19:43 2016 Romain KANIA
** Last update Mon Jan 25 23:55:54 2016 Romain Kania
*/

#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include "include/my.h"

void	sigint()
{
  my_putstr("\n$> ");
}


void	segfault()
{
  exit(0);
}

char	*argforcd(char *s, int i)
{
  char	*home;
  int	n;

  n = 0;
  home = malloc(sizeof(char *) * 100);
  if (home == NULL)
    return (NULL);
  while (s[i] != ' ' && s[i] != '\0')
    {
      home[n++] = s[i];
      i++;
    }
  home[n] = '\0';
  return (home);
}

int	dothecd(char *s, char **ae)
{
  int	i;
  char	*home;

  i = 0;
  if (s[i++] == 'c')
    if (s[i++] == 'd')
      {
	if (my_strlen(s) == i)
	  {
	    home = searchhome(ae);
	    chdir(home);
	  }
	  else
	  {
	    home = argforcd(s, ++i);
	    if (chdir(home) == -1)
	      {
		my_putstr("cd: aucun fichier ou dossier de ce type: ");
		my_putstr(home);
		my_putchar('\n');
	      }
	  }
	return (1);
      }
  return (0);
}


int	main(int ac, char *av, char **ae)
{
  char	*s;
  int	i;

  my_putstr("$> ");
  while (1)
    {
      i = 0;
      s = malloc(sizeof(char *) * 50000);
      signal(SIGSEGV, segfault);
      signal(SIGINT, sigint);
      read(0, s, 50000);
      while (s[i] != '\n')
	i++;
      s[i] = '\0';
      s = epur_str(s);
      checkexit(s);
      if (dothecd(s, ae) != 1)
	mysh(s, ae);
      else
	my_putstr("$> ");
      free(s);
    }
  return (0);
}
