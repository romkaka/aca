/*
** my_isneg.c for my_isneg in /home/kania_r/rendu/Piscine_C_J03
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Wed Sep 30 10:51:32 2015 Romain Kania
** Last update Tue Oct  6 09:54:51 2015 Romain Kania
*/

int	my_isneg(int nb)
{
  if (nb < 0)
    {
      my_putchar('N');
    }
  else
    {
      my_putchar('P');
    }
}
