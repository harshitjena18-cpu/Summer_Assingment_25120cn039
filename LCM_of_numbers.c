#include<stdio.h>
int main(){
    int a,b,i;
    printf("Enter the number: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;;i++){
        if(i%a==1 && i%b==0 ){
            printf("The LCM of %d and %d is %d",a,b,i);
        }
    }
    return 0;
}