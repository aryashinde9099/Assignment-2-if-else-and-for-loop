#include <stdio.h>

void main() {
    int i,sum=0,avg;
   

    for(i=1;i<=10;i++){
        printf("%d\n",i);
        sum+=i;
        avg=sum/10;
    }
    printf("Sum of first 10 numbers is:%d\n",sum);
    printf("average of first 10 numbers:%d\n",avg);
}