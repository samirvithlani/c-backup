#include<stdio.h>

void main(){


    int no;
    printf("\n enter no :");
    scanf("%d",&no);

    if(no % 2 == 0){
        printf("\n no is even");
    }
    else if(no % 3 == 0){
        printf("\n no is div by 3 :");
    }
    else{
        printf("\n no is odd ::");
    }

}