/*
** my_str_isnum.c for my_str_isnum in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 15:10:07 2015 Romain Kania
** Last update Tue Oct  6 15:10:20 2015 Romain Kania
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= '0' && str[i] <= '9')
        {
          i = i + 1;
        }
      else
        {
          return (0);
        }
    }
  return (1);
}
