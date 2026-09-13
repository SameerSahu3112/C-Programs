#include<stdio.h>
int main(){
    int n, firstdigit, original;
    printf("Enter The Number: \n");
    scanf("%d", &n);
    original = n;
    while(n >= 10){
        n = n / 10;
    }
    firstdigit = n;
    printf("The First Digit Is: %d \n", firstdigit);
    int lastdigit = original % 10;
    printf("The Last Digit Is: %d \n", lastdigit);
    return 0;
}