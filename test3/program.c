#include <stdio.h>
#include "modul.c"

/* program nie mógł działać, ponieważ extern w c ++ oznacza definiowanie jakiejś zmiennej "globalnie" tak aby kazdy inny "plik" mógł z niej korzystać,
 *  o ile ma ten plik zalinkowany. Dla tego w c++, definicja z extern powinna być w pliku modul.c , plik powinien byc zalinkowany, a program.c powinien poprawnie
 *  korzystac z zadefiniowanych zmiennych.
 *  */
static const double PI;
static const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
