/*
** my_sort_int_tab.c for my_sort_int_tab in /home/kania_r/rendu/Piscine_C_J07/lib/my
** 
** Made by Romain Kania
** Login   <kania_r@epitech.net>
** 
** Started on  Tue Oct  6 14:48:25 2015 Romain Kania
** Last update Tue Oct  6 14:49:11 2015 Romain Kania
*/

void	my_sort_int_tab(int *tab, int size)
{
  int   i;
  int   sort;
  int   nb;

  nb = 0;
  sort = 0;
  while (sort == 0)
    {
      i = 0;
      sort = 1;
      while ((i + 1) < size)
        {
          if (tab[i] > tab[i + 1])
            {
              sort = 0;
              my_swap(&tab[i], &tab[i + 1]);
            }
          i = i + 1;
        }
      nb++;
    }
}
