#include <stdio.h>
int main(void){
int b;
int c=1;
int x;
int n ;

scanf ("%d %d",&x,&n);
 b=x;
 while(c<n){
    b=b*x;
    ++c;
    printf("%d\n",b);
}
}