#include<stdio.h>
int main(){
    int i,an=0,n=0;
    int am=1;
    int as;
    printf("Enter The Number Of Terms You Want To Print: ");
    scanf("%d", &i);
    while (n < i){
        n++; 
        as = am + an;
        an = am;
        am = as;
        printf("%d\n",an);
    }
}

