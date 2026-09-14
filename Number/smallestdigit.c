#include<stdio.h>
int main(){
    int n, min = 9;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0){
        if(n % 10 < min){
            min = n % 10;
        }
        n /= 10;
    }
    printf("Smallest digit is: %d", min);
    return 0;
}