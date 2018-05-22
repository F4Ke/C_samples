#include <stdio.h>
#include <stdlib.h> // AJOUT de stdlib.h pour mallox

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

char *change_to_a(char *str)
{

  char *aaa_string = malloc(my_strlen(str) * sizeof(char)); // ON limite à 256 chars la capacité de la chaine

  int count = 0;

  while (str[count] != '\0')
  {
    aaa_string[count] = 'A';
    count++;
  }

  return aaa_string;
}

int main(void)
{
  char *mon_nom = malloc(256 * sizeof(char)); // ON limite à 256 chars la capacité de la chaine

  printf("Quel est votre nom ? ");
  fgets(mon_nom, 255, stdin); // 256 - 1 -> on a besoin du dernier element pour \0 !

  printf("-> %s\n", mon_nom);

  char *changed_name = change_to_a(mon_nom);

  printf("-> %s\n", changed_name);

  free(mon_nom); // ON LIBERE !
  free(changed_name); // ON LIBERE !
  return 0; // code de retour du programm
}
