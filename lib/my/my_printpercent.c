/*
** my_printpercent.c for printpercent in /home/kania_r/rendu/PSU_2015_my_printf
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Sun Nov 15 16:01:02 2015 Romain Kania
** Last update Sun Nov 15 17:20:14 2015 Romain Kania
*/

#include <stdarg.h>

int	printpercent(char *str, int i, va_list ap)
{
  int	counter;
  int	save;

  counter = 0;
  while (str[i] == '%')
    {
      counter++;
      i++;
    }
  if (counter % 2 == 1)
    save = counter;
  else if (counter % 2 == 0)
    {
      counter++;
      save = counter;
    }
  while (counter != save / 2)
    {
      my_putchar('%');
      counter--;
    }
  return (i);
}
