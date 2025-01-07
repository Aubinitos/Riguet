#include<stdio.h>
int main(){
    printf("veuilez entrez 5 nombres\n");
    int tab [5]={};
    for(int i = 0; i < 5; i++) {
        scanf("%d", &tab[i]);
    }
    printf("%d", tab);
}