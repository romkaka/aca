/*
** my_is_prime.c for my_is_prime in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 14:52:37 2015 Romain Kania
** Last update Tue Oct  6 14:52:55 2015 Romain Kania
*/

int	my_is_prime(int nombre)
{
  int	i;

  i = 2;
  if (nombre == 0 || nombre == 1)
    {
      return (0);
    }
  while (i < nombre)
    {
      if (nombre % i == 0)
        {
          return (0);
        }
      i = i + 1;
    }
  return (1);
}
