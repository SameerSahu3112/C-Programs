#include<stdio.h>
int main(){
    int num, i=0,originalnumber;
    printf("Enter The Number: ");
    scanf("%d", &num);
    originalnumber = num;
    for(i=1; i<=originalnumber; ++i){
        originalnumber = originalnumber / 10;
    }
    printf("The Number Of The Digits: %d", i);
}