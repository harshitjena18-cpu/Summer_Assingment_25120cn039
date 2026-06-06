#include<stdio.h>
int main(){
    int a,b,temp, num1, num2;
    printf("Enter the two number: \n");
    scanf("%d %d",&num1,&num2);
    a=num1;
    b=num2;
    temp=b;
    b=a%b;
    a=temp;
    printf("THE GCD OF %d AND %d IS %d",num1,num2,a);
    return 0; 


}