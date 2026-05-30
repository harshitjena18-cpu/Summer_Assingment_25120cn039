#include<stdio.h>
int main(){
    int a,n;
    printf(
        "Enter the range: \n"
    );
    scanf(
        "%d",&n
    );
    printf("These are the prime numbers in the range %d\n",n);
    for(
        a=0;a<=n;a++
    ){
        if(a%2!=0){
            printf("%d\n",a);    
        }
    }
    return 0;
}