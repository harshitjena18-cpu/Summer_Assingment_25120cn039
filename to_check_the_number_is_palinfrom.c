#include<stdio.h>
int main(){
    int a,i,n;
    printf("Enter  the number to be checked: \n");
    scanf("%d",&a);
    n=a%10;
    i=i*10+n;
    n=n/10;
    if(a==i){
        printf("The number is palindrom");

    }
    else{
        printf("the number is not palindrom");

    }
    return 0;
}