/*
** my_str_islower.c for my_str_islower in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 15:14:51 2015 Romain Kania
** Last update Tue Oct  6 15:15:18 2015 Romain Kania
*/

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  if (str[i] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if (str[i] > 'z' || str[i] < 'a')
        return (0);
      i++;
    }
  return (1);
}
