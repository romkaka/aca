/*
** my_put_nbr.c for my_put_nbr in /home/kania_r/rendu/Piscine_C_J07/lib
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 09:57:03 2015 Romain Kania
** Last update Tue Oct  6 11:43:26 2015 Romain Kania
*/

int	my_put_nbr(int nb)
{
  int   ng;

  ng = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == -2147483648)
        {
          ng = 1;
          nb++;
        }
      nb = nb * -1;
    }
  if (nb >= 10)
    my_put_nbr(nb / 10);
  if (ng == 1)
    {
      ng = 0;
      my_putchar(nb % 10 + '1');
    }
  else
    my_putchar(nb % 10 + '0');
}
