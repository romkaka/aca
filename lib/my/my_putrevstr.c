/*
** my_putrevstr.c for my_putrevstr in /home/kania_r/rendu/PSU_2015_my_printf/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Sun Nov 15 17:34:19 2015 Romain Kania
** Last update Sun Nov 15 17:58:11 2015 Romain Kania
*/

int	my_putrevstr(char *str)
{
  int	i;

  i = my_strlen(str) - 1;
  while (i >= 0)
    {
      my_putchar(str[i]);
      i--;
    }
  return (i);
}
