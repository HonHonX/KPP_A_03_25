#include <stdio.h>
int main(){
  
	printf("\n ************************************* ");
	printf("\n *   ^,,,,^   *                      * ");
	printf("\n *  ( o x o)  * Zinseszinsberechnung * ");
	printf("\n *  ( 7   7)  *                      * ");
	printf("\n *   ´´´´´´   *              ©S.Buch * ");
	printf("\n ************************************* \n");

  //Definition der Variablen 
  float k0=0, i=0.045, n, kn;
  int a;
  
  //Einlesen der Werte
  printf("\nBitte geben Sie Ihr Startkapital an: ");
  scanf("%f",&k0);
  float ktemp = k0;
  printf("\nBitte geben Sie die Laufzeitjahre an: ");
  scanf("%f",&n);
  
  //Berechnung 
  for(a=1;a<=n;a++) {
      kn=ktemp+(ktemp*i*a);
      printf("\nNach %d Jahr(en) beträgt das Kapital %.2f€.\n",a,kn);
      ktemp=kn;
  }
  
  //Ende
  printf("\n\n");
	return 0;
} 
