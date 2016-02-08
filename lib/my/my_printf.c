/*
** my_printf.c for my_printf in /home/kania_r/rendu/PSU_2015_my_printf
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Mon Nov  2 15:54:40 2015 Romain Kania
** Last update Sun Nov 15 21:08:44 2015 Romain Kania
*/

#include <stdarg.h>

void	printint(char *str, int i, va_list ap)
{
  int	p;
  int	n;

   if (str[i] == 'i' || str[i] == 'd')
    {
      my_put_nbr(va_arg(ap, int));
    }
}

void	printchar(char *str, int i, va_list ap)
{
  if (str[i] == 'c')
    my_putchar(va_arg(ap, int));
}
void	printcharstar(char *str, int i, va_list ap)
{
  if (str[i] == 's')
    my_putstr(va_arg(ap, char *));
}

int	my_printf(char *str, ...)
{
  int	i;
  va_list ap;

  i = 0;
  va_start(ap, str);
  while (str[i] != '\0')
    {
      if (str[i] != '%')
	my_putchar(str[i]);
      else
	{
	  i++;
	 i = redirect(str, i, ap);
	  printchar(str, i, ap);
	  if (str[i] == 'h' || str[i] == 'l')
	    {
	      printshort(str, i, ap);
	      printlong(str, i, ap);
	      i++;
	    }
	}
      i++;
    }
  va_end(ap);
}
