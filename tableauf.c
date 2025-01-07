#include<stdio.h>
int main(){
    int tab[5], c;
    for ( int i = 0; i<5 ; i++){
        scanf("%d", &tab[i]);
    }
    for (int i =0; i < 3 ; i++ ){
        c=tab[i];
        tab[i] = tab[4-i];
        tab[4-i]=c;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n" ,tab[i]);
    }
}