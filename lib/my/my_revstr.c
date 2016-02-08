/*
** my_revstr.c for my_revstr in /home/kania_r/rendu/Piscine_C_J06/ex_04
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Mon Oct  5 16:18:53 2015 Romain Kania
** Last update Mon Oct  5 21:49:03 2015 Romain Kania
*/

char	*my_revstr(char *str)
{
  int	i;
  int	a;
  int	b;

  i = 0;
  a = 0;
  b = 0;
  while (str[a] != '\0')
    {
      a++;
    }
  a--;
  while (i < a)
    {
      b = str[i];
      str[i] = str[a];
      str[a] = b;
      i++;
      a--;
    }
  return (str);
}
