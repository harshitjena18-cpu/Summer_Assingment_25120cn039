#include<stdio.h>
#include<math.h>
int main(){
    int num,i,a,r,n=0,result=0;
    printf("Enter the range: \n");
    scanf("%d",&num);
    for(i=0;i<=n;i++){

    i=num;
    while(a!=0){
        a/=10;
        n++;
    }
    a=num;
    while(a!=0){
        r=a%10;
        result+=pow(r,n);}
        printf("%d",result);
    }
    return 0;
}