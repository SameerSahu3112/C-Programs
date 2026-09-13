#include<stdio.h>
int main(){
    int n, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the digit to count: ");
    scanf("%d", &digit);
    while(n != 0){
        if(n % 10 == digit){
            count++;
        }
        n = n / 10;
    }
    printf("The digit %d appears %d times in the number.\n", digit, count);
    return 0;
}
