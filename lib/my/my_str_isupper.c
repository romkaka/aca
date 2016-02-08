/*
** my_str_isupper.c for my_str_isupper.c in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 15:15:57 2015 Romain Kania
** Last update Tue Oct  6 15:16:08 2015 Romain Kania
*/

int	my_str_isupper(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
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
