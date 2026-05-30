#include<stdio.h>
int main(){
    int a;
    printf("Enter the number to check: \n");
    scanf("%d",&a);
    if(a%2==0){
        printf("The entered number is not a prime number");
    }
    else{
        printf("The entered number is prime number");
    }
    return 0;
}