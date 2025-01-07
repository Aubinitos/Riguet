#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
    
    int generer_nombre();
    int nbgen = generer_nombre(), a;
    while(a != nbgen) {
        printf("Entrer un nombre: ");
        scanf("%d", &a);
        if (a > nbgen) {
            printf("Plus petit.\n");
        } else if (a < nbgen) {
            printf("Plus grand\n");

    }
    }
    printf("Le nombre était %d, Bravo tu as gagné !!\n", nbgen);
}

int generer_nombre() {
    srand(time(NULL));
    return rand()%(100-0+1) + 0;
}