/*
** my_strcapitalize.c for my_strcapitalize in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 15:07:02 2015 Romain Kania
** Last update Tue Oct  6 15:07:21 2015 Romain Kania
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 1;
  my_strlowcase(str);
  if (str[0] >= 97 && str[0] <= 122)
    str[0] = str[0] - 32;
  while (str[i] != '\0')
    {
      if ((str[i] >= ' ' && str[i] <= '/') || (str[i] <= '@' && str[i] >= ':'))
        if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
          str[i + 1] = str[i + 1] - 32;
      i++;
    }
  return (str);
}
