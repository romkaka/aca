/*
** my_strcat.c for my_strcat in /home/loens_g/rendu/Piscine_C_J07/ex_02
** 
** Made by gregoire loens
** Login   <loens_g@epitech.net>
** 
** Started on  Tue Oct  6 18:54:22 2015 gregoire loens
** Last update Fri Jan 22 15:31:15 2016 Romain KANIA
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = my_strlen(dest);
  while (src[i])
    {
      dest[j++] = src[i];
      i++;
    }
  dest[j] = '\0';
  return (dest);
}
