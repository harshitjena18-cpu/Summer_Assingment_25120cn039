#include<stdio.h>
int main(){
    int a,u,sum;
    int n;
    printf("Enter the digit: \n");
    scanf("%d",&a);
    n=a;
    u=n%10;
    sum=+u;
    n=n/10;
    printf("sum of the digit of %d is %d", a,sum);
    return 0;

}