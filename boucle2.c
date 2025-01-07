#include <stdio.h>
int main() {
float a ;
float b ;
double c;
int o;
char fin = 'a';
 
 
 while (fin != 's')
 {
  printf ("donnez deux nombres\n");
  scanf ("%f %f",&a,&b);
  printf("choisir l'opération a effectuer \n 1 pour la somme \n 2 pour la différence \n 3 pour le produit \n 4 pour le quotient \n");
  scanf ("%d", &o);
  if (o==1) {
  c=a+b;
  printf ("addition %f\n",c);
  }
  else if (o==2){
  c=a*b;
  printf ("mutiplication %f\n",c);}
  else if (o==3){
  c=a/b;
   if (b == 0) {
    printf ("division impossible\n");
  }
  else {
    printf ("division %f\n",c);
  }
  }
  else if (o==4) {
  c=a-b;
  printf ("soustraction %f\n",c);}
 scanf("%c",&fin);
 
 }


}