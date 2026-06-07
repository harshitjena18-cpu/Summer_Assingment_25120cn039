#include<stdio.h>
int main(){
    int f1=0,f2=1,f3,i,n;
    printf("Enter the range upto whuch series is to be printed: \n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("%d",f1);
        printf("%d",f2);
        f3=f1+f2;
        printf("%d",f3);
        f1=f2;
        f2=f3;
    }
    return 0;
}