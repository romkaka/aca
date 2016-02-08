/*
** my_strcpy.c for my_strcpy in /home/kania_r/rendu/PSU_2015_my_printf/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Sun Nov 15 17:35:57 2015 Romain Kania
** Last update Sun Nov 15 17:37:03 2015 Romain Kania
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
