#include <stdio.h>

int ma_fonction_addition(int nombre_1, int nombre_2)
{
  return (nombre_1 + nombre_2);
}

int main(void)
{
  int mon_total = 0;
  puts("Bonjour");  // on utilise puts pour les chaines simple, c'est plus safe. J'expliquerai pourquoi plus tard
  // puts() ajoute un \n à la fin de la chaine
  mon_total = ma_fonction_addition(1, 4);
  printf("The total is %d. \n", mon_total);
  return 0; // code de retour du programm
}
