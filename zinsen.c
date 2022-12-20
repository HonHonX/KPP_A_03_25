#include <stdio.h>
int main(){
  
	printf("\n ************************************* ");
	printf("\n *   ^,,,,^   *                      * ");
	printf("\n *  ( o x o)  * Zinsberechnung       * ");
	printf("\n *  ( 7   7)  *                      * ");
	printf("\n *   ´´´´´´   *              ©S.Buch * ");
	printf("\n ************************************* \n");

  //Definition der Variablen 
  float k0, i=0.045, n, kn;
  int a;
  
  //Einlesen der Werte
  printf("\nBitte geben Sie Ihr Startkapital an: ");
  scanf("%f",&ko);
  printf("\nBitte geben Sie die Laufzeitjahre an: ");
  scanf("%f",&n);
  
  //Berechnung 
  for(a=1;a<=n;a++) {
      kn=k0+(k0*i*a);
      printf("\nNach %d Jahren beträgt das Kapital %f.\n");
  }
  
  /Ende
  printf("\n\n");
	return 0;
} 
