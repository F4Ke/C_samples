#include <stdio.h>
#include <string.h> // pour utiliser strlen
#include <stdlib.h> // pour utiliser malloc

// ICI on pourrai simplement utiliser printf ou autre fonctions d'affichage, mais c'est bien plus drole comme ça
void process(char *nom, char* boulettes)
{
  puts("Bonjour ! ( version marrante ) :");
  // INIT star and end string
  char start_string[9] = " a fait ";
  char end_string[14] = " boulettes!\n";

  int nom_size = (int)strlen(nom);
  int boulettes_size = (int)strlen(boulettes);

  int final_size = ((int)strlen(start_string) + (int)strlen(end_string) + nom_size + boulettes_size) + 1;

  //
  // ON ALLOUE
  char *final_string = malloc((int)(final_size * sizeof(char)));

  strcat(final_string, nom);
  strcat(final_string, start_string);
  strcat(final_string, boulettes);
  strcat(final_string, end_string);

  puts(final_string);

  free(final_string); // et oui, on l'oublie pas !
  return ;
}

void process_2(char *nom, char *boulettes)
{
  puts("Bonjour ! ( version normale ) :");
  printf("%s a fait %s boulettes!\n", nom, boulettes);
}

// ./a.out argument1 argument2
int main(int argc , char *argv[]) // *argv[] s'écrit aussi char **argv
{
  //argc = nombre d'argument (+ le binaire)
  // 1 = 0 argument
  // 2 = 1 argument
  // 3 = 2 arguments etc.

  if (argc >= 3)
  {
    // OK, on continue
    process(argv[1], argv[2]);
    //
    process_2(argv[1], argv[2]);
    puts("");
    return 0;
  }
  else
  {
    // pas assez d'arguments
    // message d'erreur
    puts("Usage : ./binaire arg1 arg2");
    puts("exemple : arg1 = Damien");
    puts("arg2 = 42");
    return (-1); // -1 for error
  }
  return 0;
}
