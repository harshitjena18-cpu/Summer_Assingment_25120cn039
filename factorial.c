#include<stdio.h>
int main(){
    int fact,i,j;
    printf("enter the number to find the factorial: \n");
    scanf("%d",&fact);
    for(i=1;i<=fact;i++){
        j=j*i;
    }
    printf("the factorial of %d is %d",fact,j);
    return 0;
}