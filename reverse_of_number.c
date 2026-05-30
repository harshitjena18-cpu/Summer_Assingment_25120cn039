#include<stdio.h>
int main(){
    int a,i=0,n;
    printf("enter the number to be reverse : \n");
    scanf("%d",&a);
    n=a%10;
    i=i*10+n;
    n=n/10;
    printf("The reverse of the number is %d",i);
    return 0;

}