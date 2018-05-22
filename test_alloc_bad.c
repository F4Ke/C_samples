#include <stdio.h>

char *change_to_a(char *str)
{
  int count = 0;

  while (str[count] != '\0')
  {
    str[count] = 'A';
    count++;
  }

  return str;
}

int main(void)
{
  char mon_nom[8];

  printf("Quel est votre nom ? ");
  scanf("%s", mon_nom);

  printf("-> %s\n", change_to_a(mon_nom)); // Plante avec + de 8 chars

  return 0; // code de retour du programm
}
