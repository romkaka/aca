/*
** my_show_wordtab.c for my_show_wordtab in /home/kania_r/rendu/Piscine_C_J08/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Wed Oct  7 18:01:23 2015 Romain Kania
** Last update Wed Oct  7 21:12:34 2015 Romain Kania
*/

int	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
}
