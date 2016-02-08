/*
** my_str_isalpha.c for my_str_isalpha in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 15:08:59 2015 Romain Kania
** Last update Tue Oct  6 15:09:18 2015 Romain Kania
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        i++;
      else
        return (0);
    }
  return (1);
}
