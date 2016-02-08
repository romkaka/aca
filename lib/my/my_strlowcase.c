/*
** my_strlowcase.c for my_strlowcase in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 15:04:32 2015 Romain Kania
** Last update Tue Oct  6 15:04:44 2015 Romain Kania
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 90 && str[i] >= 65)
        str[i] = str[i] + 32;
      i++;
    }
  return (str);
}
