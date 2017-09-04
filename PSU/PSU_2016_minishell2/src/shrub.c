/*
** shrub.c for emacs in /home/jules/PSU/PSU_2016_minishell2/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Thu Apr  6 10:16:21 2017 Jules Spender
** Last update Wed May  3 11:29:48 2017 Jules Spender
*/

#include "my_h.h"

int	shrub(t_node *arbre, char **array)
{
  char	**ll_array;
  int	i;

  i = 0;
  ll_array = ll_array_create(array);
  return (0);
}

int	tree_creator(t_node *arbre, char **array, char **ll_array)
{
  int	i;

  i = 0;
  while (ll_array[i] != NULL && ll_array[i + 1] != NULL)
    {
      while (my_strncmp(ll_array[i], "OPE_", 4) != 0 && ll_array[i + 1] != NULL)
	i = i + 1;
      if (ll_array[i + 1] != NULL)
	{
	  arbre = add_node(arbre, array, ll_array, i);
	  arbre->left = add_node(arbre, array, ll_array, i - 1);
	  arbre->right = add_node(arbre, array, ll_array, i + 1);
	}
      i = i + 1;
    }
  return (0);
}

t_node	*add_node(t_node *arbre, char **array, char **ll_array, int i)
{
  int		n;
  t_node	*elem;

  n = 0;
  elem = malloc(sizeof(t_node));
  elem->key = array[i];
  elem->left = NULL;
  elem->right = NULL;
  return (elem);
}

char	**ll_array_create(char **array)
{
  char	**ll_array;
  int	i;

  i = -1;
  while (array[++i] != NULL);
  ll_array = malloc(sizeof(char*) * (i + 1));
  i = 0;
  while (array[i] != NULL)
    {
      if (array[i][0] == ';' || array[i][0] == '|' || array[i][0] == '<'
	  || array[i][0] == '>' || array[i][0] == '&')
	ll_array[i] = my_strcat(array[i], "OPE_");
      else if (i == 0 ||
	       (i != 0 && (my_strncmp(ll_array[i - 1], "OPE_;", 5) == 0)) ||
	       (i != 0 && (my_strncmp(ll_array[i - 1], "OPE_|", 5) == 0)) ||
	       (i != 0 && (my_strncmp(ll_array[i - 1], "OPE_&", 5) == 0)))
	ll_array[i] = my_strdup("COMMAND");
      else
	ll_array[i] = my_strdup("ARGUMENT");
      i = i + 1;
    }
  i = -1;
  while (ll_array[++i] != NULL)
    printf("%s ", ll_array[i]);
  printf("\n");
  return (ll_array);
}
