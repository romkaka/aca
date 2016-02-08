/*
** mysh3.c for mysh in /home/kania_r/rendu/PSU_2015_minishell1
** 
** Made by Romain KANIA
** Login   <kania_r@epitech.net>
** 
** Started on Sun Jan 24 15:30:56 2016 Romain KANIA
** Last update Sun Jan 24 16:36:14 2016 Romain KANIA
*/

void	disperror(char **word)
{
  my_putstr(word[0]);
  my_putstr(": Command not found.\n");
}

char	*searchhome(char **ae)
{
  char	*home;
  int	i;
  int	n;

  n = 0;
  i = 0;
  while (n != 4)
    {
      if (ae[i][n++] == 'H')
	if (ae[i][n++] == 'O')
	  if (ae[i][n++] == 'M')
	    if (ae[i][n++] == 'E')
	      {
		home = correcthome(ae, i);
		return (home);
	      }
      if (n != 4)
	{
	  i++;
	  n = 0;
	}
    }
}
