/*
** my_power_rec.c for my_power_rec in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 14:50:29 2015 Romain Kania
** Last update Fri Oct  9 11:28:59 2015 Romain Kania
*/

int	my_power_rec(int nb, int power)
{
  int	save;

  save = 1;
  if (power < 0)
    {
      return (0);
    }
  if (power != 0)
    {
      save = my_power_rec(nb, power - 1);
      save = save * nb;
    }
  return (save);
}
