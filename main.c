#include "NumClass.h"

int main() {
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);
    int i = a;

printf("The Armstrong numbers are: ");
    while(i<=b){
        if (isPrime(i)==1){
            printf("%d ",i);}
            i++;
    }
    printf("\n");
    i = 0;


printf("The Palindromes are: ");
    while(i<=b){
        if (isArmstrong(i)==1){
            printf("%d ",i);}
            i++;
    }
    printf("\n");
    i=0;


printf("The Prime numbers are: ");
    while(i<=b){
        if (isStrong(i)==1){
            printf("%d ",i);}
            i++;
    }
    printf("\n");
    i=0;

printf("The Strong numbers are: ");
    while(i<=b){
        if (isPalindrome(i)==1){
            printf("%d ",i);}
            i++;
    }
    printf("\n");


}