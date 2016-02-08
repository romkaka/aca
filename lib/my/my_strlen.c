/*
** my_strlen.c for my_strlen in /home/kania_r/rendu/Piscine_C_J04
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Thu Oct  1 16:44:54 2015 Romain Kania
** Last update Fri Jan 22 17:44:48 2016 Romain KANIA
*/

int	my_strlen(char *str)
{
  int	c;

  c = 0;
  while (str[c] != '\0')
    {
      c++;
    }
  return (c);
}
