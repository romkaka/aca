/*
** my_printf3.c for my_printf in /home/kania_r/rendu/PSU_2015_my_printf
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Mon Nov  9 14:13:10 2015 Romain Kania
** Last update Sun Nov 15 17:55:14 2015 Romain Kania
*/

#include <stdarg.h>
#include <stdlib.h>

int	tentooct(char c)
{
  int	nb;
  int	i;
  int	reste;
  char	*result;

  i = 0;
  nb = c;
  result = malloc(3);
  while (i < 3)
    {
      reste = nb % 8;
      nb = nb / 8;
      result[i] = reste + '0';
      if (nb == 0)
	result[i] != '\0';
      i++;
    }
  my_putchar('\\');
  my_revstr(result);
  my_putstr(result);
  free(result);
}

int	printS(char *result)
{
  int	i;

  i = 0;
  while (result[i] != '\0')
    {
      if (result[i] < 32 || result[i] >= 127 && result[i] != 0)
	tentooct(result[i]);
      else
	my_putchar(result[i]);
      i++;
    }
}

int	printhex(char *str, int n, unsigned int result)
{
  int   temp;
  char  *savetemp;
  int   k;
  int   i;

  savetemp = malloc(sizeof(char) * (50));
  i = 0;
  k = 0;
  while (result > 0)
    {
      temp = result % 16;
      result = result / 16;
      if (temp > 9)
	temp = temp + 7;
      savetemp[i] = temp + '0';
      i++;
      if (result < 1)
	savetemp[i] = '\0';
    }
  my_revstr(savetemp);
  my_putstr(savetemp);
  free(savetemp);
}

int	printoct(unsigned int result)
{
  int   temp;
  char  *savetemp;
  int   k;
  int   i;

  i = 0;
  k = 0;
  savetemp = malloc(sizeof(char) * (50));
  while (k == 0)
    {
      temp = result % 8;
      result = result / 8;
      savetemp[i] = temp + '0';
      i++;
      if (result < 1)
	{
	  savetemp[i] = '\0';
	  k++;
	}
    }
  my_revstr(savetemp);
  my_putstr(savetemp);
  free(savetemp);
}

int	printbin(char *str, int n, unsigned int result)
{
  int	temp;
  char	*savetemp;
  int	k;
  int	i;

  savetemp = malloc(sizeof(char) * (50));
  if (str[n] == 'b')
    {
      i = 0;
      k = 0;
      while (k == 0)
	{
	  temp = result % 2;
	  result = result / 2;
	  savetemp[i] = temp + '0';
	  i++;
	  if (result == 0)
	    {
	      savetemp[i] = '\0';
	      k++;
	    }
	}
      my_putrevstr(savetemp);
    }
  free(savetemp);
}
