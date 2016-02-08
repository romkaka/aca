/*
** my_printx.c for my_printx in /home/kania_r/rendu/PSU_2015_my_printf/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Sun Nov 15 17:44:14 2015 Romain Kania
** Last update Sun Nov 15 17:47:20 2015 Romain Kania
*/

#include <stdlib.h>

int	printx(unsigned int result)
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
	temp = temp + 39;
      savetemp[i] = temp + '0';
      i++;
      if (result < 1)
	savetemp[i] = '\0';
    }
  my_revstr(savetemp);
  my_putstr(savetemp);
  free(savetemp);
}
