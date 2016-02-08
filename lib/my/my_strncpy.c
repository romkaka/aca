/*
** my_strcpy.c for my_strcpy in /home/kania_r/rendu/Piscine_C_J06
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Mon Oct  5 09:32:13 2015 Romain Kania
** Last update Mon Oct  5 22:19:45 2015 Romain Kania
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] != '\0' && n < i)
    {
      dest[i] = src[i];
      i++;

    }
  if (i < n)
    {
      dest[i] = '\0';
      return (dest);
    }
  dest[i] = '\0';
  return (dest);
}
