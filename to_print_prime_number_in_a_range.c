#include<stdio.h>
int main(){
    int a,i, flag=0;
    printf("Enter the range: \n");
    scnaf("%d",&a);
    for(i=0;i<=a;i++){
        if(i%2==1 && i!=2){
            printf("PRIME NUMBERS IN THE RANGE %d ARE %d \n",a,i);
            flag=0;
        }
        if(i==2){
            printf("%d",i=2);
        }
    }
    return 0;
}