/*
** my_putstr.c for my_putstr in /home/kania_r/rendu/Piscine_C_J07/lib
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 10:12:27 2015 Romain Kania
** Last update Tue Oct  6 11:47:16 2015 Romain Kania
*/

int	my_putstr(char *str)
{
  int	c;

  c = 0;
  while (str[c] != '\0')
    {
      my_putchar(str[c]);
      c++;
    }
}
