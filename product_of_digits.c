#include<stdio.h>
int main(){
    int a,i=0,n;
    printf("Enter the number the digit: \n");
    scanf("%d",&a);
    n=a%10;
    i=i*n;
    n=n/10;
    printf("The product of the digits of %d is: %d",a,i);
    return 0;
}