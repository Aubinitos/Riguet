#include<stdlib.h>
#include<stdio.h>
int main (){
int nb ; int div;
printf ("donner un nombre \n");
scanf("%d",&nb);
div = nb % 2;
if (div == 0 ){
   for(int i = 0; i <= nb ; i= i+2 ) {
      div = div + i ;
      printf("%d\n",div);
}  
}
if (div == 1 ){
   div = div - 1;
   for(int i = 0; i <= nb ; i= i+2 ) {
      div = div + i ;
      printf("%d\n",div);
}
}
}