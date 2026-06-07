#include<stdio.h>
int main(){
    int n,sum=0;
    int i;
    printf("Enter the number upto which sum is required: \n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum+=i;
    }
    printf("Sum of first %d natural numbers is: %d",n,sum);
    return 0;
}
