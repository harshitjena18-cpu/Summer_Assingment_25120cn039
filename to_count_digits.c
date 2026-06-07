#include<stdio.h>
int main(){
    int a,n,u;
    printf("enter the number whose digits is to be counted: \n");
    scanf("%d",&a);
    n=a;
    u=0;
    while(n!=0){
        n=n/10;
        u++;
    }    printf("the number of digits in %d is %d",a,u);
    return 0;
}