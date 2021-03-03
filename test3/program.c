#include <stdio.h>
#include "modul.c"

/* Zmiany: extern -> static , #include "modul.c"  Wtedy zadziała w c ++ */
static const double PI;
static const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
