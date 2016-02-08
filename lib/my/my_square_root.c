/*
** my_square_root.c for my_square_root in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 14:51:45 2015 Romain Kania
** Last update Tue Oct  6 14:52:07 2015 Romain Kania
*/

int	my_square_root(int nb)
{
  int	i;

  i = 0;
  if (nb == 1)
    {
      return (1);
    }
  while (i <= (nb / 2))
    {
      if ((i * i) == nb)
        {
          return (i);
        }
      i = i + 1;
    }
  return (0);
}
