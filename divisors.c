#include<stdio.h>
void main(){
    int i,x;
    printf("enter number:\n");
    scanf("%d",&x);

    printf("Divisors of following number are:\n");
    
    for(i=1;i<=x;i++){
        if((x % i) == 0 ){
            printf("%d\n",i);
            
    }
}
}