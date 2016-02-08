/*
** my_getnbr.c for my_getnbr in /home/kania_r/rendu/Piscine_C_J07/lib
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 10:41:28 2015 Romain Kania
** Last update Fri Oct  9 11:28:42 2015 Romain Kania
*/

int	is_neg(char *str)
{
  int	i;
  int	counter;

  i = 0;
  counter = 0;
  while (str[i] > '9' || str[i] < '0')
    {
      if (str[i] == '-')
        counter++;
      i++;
    }
  if (counter % 2 != 0)
    return (1);
  else
    return (0);
}

int	is_num(char l)
{
  if (l >= '0' && l <= '9')
    return (1);
  else
    return (0);
}

int	my_getnbr(char *str)
{
  int           i;
  int           nbr;

  nbr = 0;
  i = 0;
  while (is_num(str[i]) == 0)
    i++;
  while (is_num(str[i]) == 1)
    {
      nbr = ((nbr * 10) + (str[i] - 48));
      i++;
    }
  if (is_neg(str) == 1)
    nbr = -nbr;
  return (nbr);
}
