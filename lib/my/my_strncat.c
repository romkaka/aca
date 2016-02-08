/*
** my_strncat.c for my_strncat in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Thu Oct  8 12:20:36 2015 Romain Kania
** Last update Thu Oct  8 12:21:06 2015 Romain Kania
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	j;

  j = 0;
  i = my_strlen(dest);
  while (src[j] && i < nb)
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  dest[i] = '\0';
  return (dest);
}
