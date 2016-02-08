/*
** mysh2.c for mysh in /home/kania_r/rendu/PSU_2015_minishell1
** 
** Made by Romain KANIA
** Login   <kania_r@epitech.net>
** 
** Started on Sun Jan 24 15:24:18 2016 Romain KANIA
** Last update Mon Jan 25 23:54:02 2016 Romain Kania
*/

#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include "include/my.h"

void	checkexit(char *s)
{
  int	i;

  i = 0;
  while (i < 3)
    {
      if (s[i++] == 'e')
	if (s[i++] == 'x')
	  if (s[i++] == 'i')
	    if (s[i++] == 't')
	      {
		my_putstr("exit\n");
		exit(0);
	      }
    }
}

char	*correcthome(char **ae, int i)
{
  int	n;
  int	m;
  char	*home;

  home = malloc(sizeof(char *) * 100);
  m = 0;
  n = 5;
  while (ae[i][n] != '\0')
    {
      home[m] = ae[i][n];
      n++;
      m++;
    }
  home[m] = '\0';
  return (home);
}

char	**correctpath(char **ae, char **word, int i)
{
  int	n;
  char	*str;
  int	statue;
  int	m;

  statue = 0;
  n = 5;
  while (statue == 0 && ae[i][n++] != '\n')
    {
      m = 0;
      str = malloc(sizeof(char *) * 500);
      while (ae[i][n] != '\n' && ae[i][n] != ':')
	str[m++] = ae[i][n++];
      if (ae[i][n] == ':')
	str[m] = '/';
      str = my_strcat(str, word[0]);
      if (access(str, F_OK) != -1)
	{
	  statue = 1;
	  execve(str, word, ae);
	}
      if (access(str, F_OK) == -1 && n >= my_strlen(ae[i]))
	disperror(word);
    }
  free(str);
}

char 	**searchpath(char **ae, char **word)
{
  int	i;
  int	n;
  char	**str;

  n = 0;
  i = 0;
  while (n != 4)
    {
      if (ae[i][n++] == 'P')
	if (ae[i][n++] == 'A')
	  if (ae[i][n++] == 'T')
	    if (ae[i][n++] == 'H')
	      str = correctpath(ae, word, i);
      if (n != 4)
	{
	  i++;
	  n = 0;
	}
    }
}


int	mysh(char *s, char **ae)
{
  pid_t	pid;
  int	stat_loc;
  char	**word;

  pid = fork();
  if (pid == -1)
    exit(EXIT_FAILURE);
  if (pid > 0)
    {
      wait(0);
      my_putstr("$> ");
    }
  else
    {
      word = my_str_to_word_tab(s);
      if (access(word[0], F_OK) != -1)
	{
	  execve(word[0], word, ae);
	  exit(0);
	}
      else
	searchpath(ae, word);
      exit(0);
    }
}
