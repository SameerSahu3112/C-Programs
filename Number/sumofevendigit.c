#include<stdio.h>
int main(){
    int n,digit,sum=0;
    printf("Enter The Num: ");
    scanf("%d", &n);

    while (n>0){
        digit = n % 10;
        if (digit % 2 == 0){
            sum += digit;
        }
        n /= 10;
    }
    printf("Sum Of Even Digits: %d", sum);
}