/*
** my_str_isprintable.c for my_str_isprintable in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 15:16:58 2015 Romain Kania
** Last update Tue Oct  6 15:17:14 2015 Romain Kania
*/

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 32 && str[i] <= 126)
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
