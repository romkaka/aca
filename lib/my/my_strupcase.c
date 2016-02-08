/*
** my_strupcase.c for my_strupcase in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 15:03:01 2015 Romain Kania
** Last update Tue Oct  6 15:03:14 2015 Romain Kania
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z')
        {
          str[i] = str[i] - 32;
        }
      i = i + 1;
    }
  return (str);
}
