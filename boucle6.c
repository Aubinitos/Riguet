#include <stdio.h>
int main(){
int argent;
int monnaie;
int somme = 0;
printf("le café est à 100 centimes, paiement avec 5,10,20,50 ou 100 centimes.\n");
do
{
    scanf("%d",&argent);
    if (argent!=5 && argent!=10 && argent!=20 && argent!=50 && argent!=100){
        printf("Entrez une monnaie valable.\n");
    }
    somme = somme +argent;
    monnaie = 100 - somme;
    printf("il manque %d\n",monnaie);
}while (somme<1);
if (somme>100){
    printf("vous avez dépassé le prix d'un café.");
    somme = somme - 100;
    printf("la machine vous rend %d centimes", somme);
}
}