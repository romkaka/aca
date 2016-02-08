/*
** my_swaps.c for my_swaps in /home/kania_r/rendu/Piscine_C_J04
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Thu Oct  1 10:35:02 2015 Romain Kania
** Last update Fri Oct  2 18:02:36 2015 Romain Kania
*/

int	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
