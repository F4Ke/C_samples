#include <stdio.h>

void add_2(int *mon_int){
  //printf("%p\n", mon_int);
  *mon_int += 2;
  return ; // return empty
}

int main(void)
{
  int toto = 40;

  puts("mon int avant : ");
  printf("%d\n", toto);

  add_2(&toto);

  puts("mon int après : ");
  printf("%d\n", toto);

  return 0; // code de retour du programm
}


