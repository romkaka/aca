/*
** my_printp.c for printp in /home/kania_r/rendu/PSU_2015_my_printf
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Mon Nov  9 14:18:21 2015 Romain Kania
** Last update Sun Nov 15 17:37:43 2015 Romain Kania
*/

#include <stdlib.h>

int	puthex(unsigned int result)
{
  int	temp;
  char	*savetemp;
  int	k;
  int	i;

  savetemp = malloc(50);
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


int	printp(char *ap)
{
  unsigned int	k;
  int	reste;
  char	*savetemp;
  unsigned int	i;

  k = 16;
  i = ap;
  my_putstr("0x7ff");
  puthex(i);
}
