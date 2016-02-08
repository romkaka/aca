/*
** my_showstr.c for my_showstr in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 15:17:52 2015 Romain Kania
** Last update Thu Oct  8 12:28:38 2015 Romain Kania
*/

int	my_showstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 32 || str[i] > 126)
        {
          my_putchar('\\');
          if (str[i] < 14)
            {
              my_putchar('0');
            }
          my_putstr((str[i]), "0123456789abcdef");
        }
      else
        {
          my_putchar(str[i]);
        }
      i = i + 1;
    }
  return (0);
}
