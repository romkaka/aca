/*
** my_putlong.c for my_printf in /home/kania_r/rendu/PSU_2015_my_printf/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Sun Nov 15 17:33:11 2015 Romain Kania
** Last update Sun Nov 15 17:41:43 2015 Romain Kania
*/

int	my_putlong(int nb)
{
  int	ng;

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
