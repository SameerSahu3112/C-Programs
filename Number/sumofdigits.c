#include<stdio.h>
int main(){
    int num, original,remainder=0;
    printf("Enter The Number: ");
    scanf("%d", &num);
    while(num>0){
        original = num % 10;
        remainder = remainder + original;
        num = num / 10;
    }
    printf("%d Is The Sum Of The Digits", remainder); 
}