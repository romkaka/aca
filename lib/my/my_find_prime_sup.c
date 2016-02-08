/*
** my_find_prime_sup.c for my_find_prime_sup in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 14:53:39 2015 Romain Kania
** Last update Tue Oct  6 14:54:14 2015 Romain Kania
*/

int	my_find_prime_sup(int nb)
{
  int	sup;

  while ((sup = my_is_prime(nb)) == 0)
    {
      nb = nb + 1;
    }
  return (nb);
}
