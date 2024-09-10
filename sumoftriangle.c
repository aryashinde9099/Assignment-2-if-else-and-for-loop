#include <stdio.h>

void main() {
    int angle1,angle2,angle3,sum=0;
    printf("Enter angles of first triangle:\n");
    scanf("%d",&angle1);

    printf("Enter angles of second triangle:\n");
    scanf("%d",&angle2);

    printf("Enter angles of third triangle:\n");
    scanf("%d",&angle3);

    sum=angle1+angle2+angle3;

    if(sum==180 && angle1>0 && angle2>0 && angle3>0 ){
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is not valid");
    }
    
}