/*
** option_6.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Sun Jun 18 17:40:52 2017 Jules Spender
** Last update Tue Jun 20 10:02:55 2017 Jules Spender
*/

#include "my_h.h"

char	*(*tab[NB_BUILTINS])(char *str) = {
  amino_a,
  amino_c,
  amino_d,
  amino_e,
  amino_f,
  amino_g,
  amino_h,
  amino_i,
  amino_k,
  amino_l,
  amino_m,
  amino_n,
  amino_p,
  amino_q,
  amino_r,
  amino_s,
  amino_t,
  amino_v,
  amino_w,
  amino_x,
  amino_y,
};

char	**make_5(char **file)
{
  int	i;
  char  **tab;
  char	**tab2;

  tab = malloc(sizeof(char *) * (TAB_SIZE * TAB_SIZE));
  tab2 = malloc(sizeof(char *) * (TAB_SIZE * TAB_SIZE));
  fill_tab(tab2, file);
  tab2 = add_reverse(tab2);
  if ((tab2 = epur_tab(tab2)) == NULL)
    return (NULL);
  i = 0;
  tab[0] = NULL;
  while (tab2[i] != NULL)
    get_sequence(tab2[i++], tab, 0, 0);
  tab = my_sort_wordtab(tab, 0, 0);
  return ((tab = epur_tab(tab)));
}

int	option_6(char **file, int n, int c, int i)
{
  int	a;
  char	**final;
  char	*s;

  if (file == NULL || file[0] == NULL || (file = make_5(file)) == NULL)
    return (0);
  final = malloc(sizeof(char *) * (TAB_SIZE * TAB_SIZE));
  s = malloc(sizeof(char) * (STR_SIZE * STR_SIZE));
  while (file[i] != NULL && ((a = 0) == 0))
    {
      while (file[i][a] != '\0' && ((n = -1) == -1))
	{
	  strncpy(s, &file[i][a], 3);
	  a = a + 3;
	  while (tab[++n](s) == NULL && n <= 21);
	  if (final[c] == NULL)
	    final[c] = malloc(sizeof(char) * (STR_SIZE * STR_SIZE));
	  final[c] = my_strcat(final[c], tab[n](s));
	}
      ++c;
      ++i;
    }
  if (i == 0)
    return (0);
  return (printtab(my_sort_wordtab((epur_tab(final)), 0, 0)));
}

