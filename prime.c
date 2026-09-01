#include <stdio.h>
int main(){
    int n;
    char choice = 'y';
    int i = 2;
    while (choice == 'y'){
        printf("Enter The Number: \n");
        scanf("%d", &n);
        while (i <= n-1){
            if (n%i == 0){
                printf("Not A Prime Number \n");
            }
            i++;
        if (i == n){
            printf("A Prime Number \n");
        }
    }
    printf("Do You Want To Continue (y/n): \n");
    scanf(" %c", choice);
    }
}
    
