/*
** my_printf2.c for my_printf2 in /home/kania_r/rendu/PSU_2015_my_printf
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Mon Nov  2 18:08:32 2015 Romain Kania
** Last update Sun Nov 15 17:50:39 2015 Romain Kania
*/

#include <stdarg.h>

int	printshort(char *str, int i, va_list ap)
{
  if (str[i] == 'h')
    {
      i++;
      if (str[i] == 'd')
	{
	  my_putshort(va_arg(ap, long));
	}
      else
	{
	  i--;
	  my_putchar('%');
	}
    }
  return (i);
}

int	printlong(char *str, int i, va_list ap)
{
  if (str[i] == 'l')
    {
      i++;
      if (str[i] == 'd')
	{
	  my_putlong(va_arg(ap, long));
	}
      else
	{
	  i--;
	  my_putchar('%');
	}
    }
  return (i);
}

int	redirect(char *str, int i, va_list ap)
{
  printint(str, i, ap);
  printcharstar(str, i, ap);
  if (str[i] == 'S' && str[i - 1] == '%')
    printS(va_arg(ap, char *));
  if (str[i] == 'o' && str[i - 1] == '%')
    printoct(va_arg(ap, unsigned int));
  if (str[i] == 'b' && str[i - 1] == '%')
    printbin(str, i, va_arg(ap, unsigned int));
  if (str[i - 1] == '%' && str[i] == 'X')
    printhex(str, i, va_arg(ap, unsigned int));
  if (str[i] == 'x')
    printx(va_arg(ap, unsigned int));
  if (str[i - 1] == '%' && str[i] == 'p')
    printp(va_arg(ap, char *));
  if (str[i] == '%')
    {
      printpercent(str, i, va_arg(ap, char *));
      while (str[i] == '%')
	i++;
      if (str[i] != ' ')
	i--;
      if (str[i] == ' ' && str[i + 1] != '%')
	i--;
    }
  return (i);
}
