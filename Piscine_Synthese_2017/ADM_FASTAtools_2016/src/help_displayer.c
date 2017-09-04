/*
** help_displayer.c for emacs in /home/jules/Piscine_Synthese_2017/SBMLparser/src
** 
** Made by Jules Spender
** Login   <louis.chegaray@epitech.eu@epitech.net>
** 
** Started on  Mon Jun 12 10:34:23 2017 Jules Spender
** Last update Sun Jun 18 16:50:30 2017 Jules Spender
*/

#include "my_h.h"

int	help_displayer(char *str)
{
  printf("USAGE\n\t\t");
  printf("%s option\n\n", str);
  printf("DESCRIPTION\n\t");
  printf("option\t1:read FASTA from the standard input");
  printf(", write the DNA sequences to the standard output\n");
  printf("\t\t2:read FASTA from the standard input, ");
  printf("write the RNA sequences to the standard output\n");
  printf("\t\t3:read FASTA from the standard input, ");
  printf("write the reverse complement to the standard output\n\t\t");
  printf("4:read FASTA from the standard input, write");
  printf("the k-mer list to the standard output\n\t\t");
  printf("5:read FASTA from the standard input, write ");
  printf("the coding sequences list to the standard output\n\t\t");
  printf("6:read FASTA from the standard input, write the");
  printf(" amino acids list to the standard output\n\t\t");
  printf("7:read FASTA from the standard input containing exactly ");
  printf("2 sequences, align them in\n\t\tsize of the k-mers for option 4\n");
  return (0);
}
