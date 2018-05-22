#include <stdio.h>

int my_strlen(char* str)
{
  int len;

  len = 0;
  while(str[len] != '\0')
  {
    len++;
  }
  return (len);
}

int size_of_str(char *ma_chaine)
{
  // cas facile :
  // return (int)strlen(ma_chaine); // trop facile !
  return my_strlen(ma_chaine);
}

int main(void)
{
  char *ma_chaine = "Bonjour Tilkee";

  int mon_total = size_of_str(ma_chaine);

  puts("'Bonjour Tilkee' fait : ");  // on utilise puts pour les chaines simple, c'est plus safe. J'expliquerai pourquoi plus tard
  printf("%d caractères. \n", mon_total);
  return 0; // code de retour du programm
}
