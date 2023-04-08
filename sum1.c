#include<stdio.h>

void main(){

    int no1,no2,no3,ans=0;
    float avg =0.0;

    printf("\n enter value of no1");
    scanf("%d",&no1);
    printf("\n enter value of no2");
    scanf("%d",&no2);
    printf("\n enter value of no3");
    scanf("%d",&no3);


    ans = no1 + no2 + no3;
    printf("\n add = %d",ans);

    //type cast
    avg = (float)ans / 3;
    printf("\n avgrage = %f",avg);




}