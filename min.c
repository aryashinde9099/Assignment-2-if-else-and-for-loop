#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter number:\n");
    scanf("%d",&a);

    printf("Enter number:\n");
    scanf("%d",&b);

    
    printf("Enter number:\n");
    scanf("%d",&c);
 
    if(a<b && a<c){
        printf("A is smalller");
    }
    else if(b<a && b<c){
        printf("B is smaller");
    }
    else if(c<a && c<b){
        printf("C is smaller");
    }
    else{
        printf("invalid input");
    }
}