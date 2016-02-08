/*
** my_strncmp.c for my_strncmp in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 15:01:48 2015 Romain Kania
** Last update Tue Oct  6 15:02:20 2015 Romain Kania
*/

int	my_strncmp(char *s1, char *s2, int nb)
{
  int	i;

  i = 0;
  while ((s1[i] || s2[i]) && i < nb)
    {
      if (s1[i] < s2[i])
        return (-1);
      if (s1[i] > s2[i])
        return (1);
      i = i + 1;
    }
  if ((s1[i] < s2[i]) && i < nb)
    return (-1);
  if ((s1[i] > s2[i]) && i < nb)
    return (1);
  return (0);
}
