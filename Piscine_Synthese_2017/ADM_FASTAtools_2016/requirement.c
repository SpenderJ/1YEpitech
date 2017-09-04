/*
** requirement.c for emacs in /home/jules/Piscine_Synthese_2017/ADM_FASTAtools_2016
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Sun Jun 18 16:26:46 2017 Jules Spender
** Last update Sun Jun 18 16:34:21 2017 Jules Spender
*/

char	*my_strcapitalize_synthesis(char *str)
{
  int   n;

  n = 0;
  while (str[n] != '\0')
    {
      if ((str[n] >= 'A' && str[n] <= 'Z') &&\
	  ((str[n - 1] <= '/') || (str[n - 1] >= ':' && str[n - 1] < 'A') ||\
	   (str[n - 1] > 'Z' && str[n - 1] < 'a') || str[n - 1] > 'z'))
	str[n] = str[n];
      else if ((str[n] >= 'a' && str[n] <= 'z') &&\
	       ((str[n - 1] <= '/') || (str[n - 1] >= ':' && str[n - 1] < 'A') ||\
		(str[n - 1] > 'Z' && str[n - 1] < 'a') || str[n - 1] > 'z'))
	str[n] = str[n] - 32;
      else if ((str[n] >= 'A' && str[n] <= 'Z') &&\
	       ((str[n - 1] >= 'A' && str[n - 1] <= 'Z') ||\
		(str[n - 1] >= 'a' && str[n - 1] <= 'z') ||\
		(str[n - 1] >= '0' && str[n - 1] <= '9')))
	str[n] = str[n] + 32;
      else
	str[n] = str[n];
      ++n;
    }
  return (str);
}
