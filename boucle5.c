#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int main(void){
srand(time(NULL));
int nb=rand()%101;
int a;
scanf("%d",&a);
while(a!=nb){
  scanf("%d",&a);  
}
if (a==nb)
{
    printf("nombre trouvé ");
}
else if (a<nb){
  printf("nombre plus grand\n");
}
else if (a>nb){
  printf("nombre plus petit\n");

}
}    