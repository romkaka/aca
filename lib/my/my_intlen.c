/*
** my_intlen.c for intlen in /home/kania_r/rendu/PSU_2015_my_printf
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Thu Nov 12 19:37:02 2015 Romain Kania
** Last update Thu Nov 12 19:41:09 2015 Romain Kania
*/

int	my_intlen(int i)
{
  int	counter;

  counter = 0;
  while (i != 0)
    {
      counter ++;
      i = i / 10;
    }
  my_put_nbr(counter);
}
