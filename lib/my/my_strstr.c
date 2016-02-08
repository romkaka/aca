/*
** my_strstr.c for my_strstr in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 14:59:14 2015 Romain Kania
** Last update Tue Oct  6 14:59:54 2015 Romain Kania
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;

  if (str[0] != '\0')
    {
      i = 0;
      while (to_find[i] != '\0')
	{
	  if (to_find[i] != str[i])
	    return (my_strstr(str + 1, to_find));
	  i = i + 1;
	}
      return (str);
    }
  else
    return (0);
}
