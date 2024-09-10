#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter number:\n");
    scanf("%d",&a);

    printf("Enter number:\n");
    scanf("%d",&b);

    
    printf("Enter number:\n");
    scanf("%d",&c);
 
    if(a>b && a>c){
        printf("A is greater");
    }
    else if(b>a && b>c){
        printf("B is greater");
    }
    else if(c>a && c>b){
        printf("C is greater");
    }
    else{
        printf("invalid input");
    }
}